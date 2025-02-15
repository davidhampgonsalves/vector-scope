#include <Arduino.h>
#include <driver/dac.h>
#include <math.h>
#include <VectorGFX.h>

#include "scene.h"

VectorGFX gfx;
uint8_t MAX_CORD = 254;
unsigned long startedAtMillis = 0;

void setup() 
{
  dac_output_enable(DAC_CHANNEL_1);
  dac_output_enable(DAC_CHANNEL_2);

  startedAtMillis = millis();

  Serial.begin(115200);
  gfx.begin();
}

int toCords(uint8_t pt) {
  return static_cast<int>(pt * 4095.0 / MAX_CORD + 0.5);
}

unsigned long previousMillis = 0;
int curFrameIndex = 0;
int curSceneIndex = 0;
int loopCount = 0;
void loop() {
  unsigned long currentMillis = millis();
  
  scene s = scenes[sceneOverride < 0 ? curSceneIndex : sceneOverride];
  if (currentMillis - previousMillis < (1000 / s.frameRate)) {
    return;
  }

  if(curSceneIndex == 0 && currentMillis - startedAtMillis > 6000) {
    // after power-on time completed: start scene 1
    curFrameIndex = 0, loopCount = 0, curSceneIndex = 1;
  }

  previousMillis = currentMillis;
  curFrameIndex += 1; 
  if(curFrameIndex >= s.frameCount) { 
    curFrameIndex = 0; 
    loopCount += 1;
    if(loopCount >= s.loopCount) {
      curSceneIndex += 1;
      if(curSceneIndex >= sceneCount) 
        curSceneIndex = 1; // skip the power-on scene
      loopCount = 0;
    }
  }

  bool isMove = true; // first point is always a move
  for(int i=0 ; i < s.framePointCounts[curFrameIndex] ; i += 2) {
    int xCord = toCords(abs(s.frames[curFrameIndex][i + 1] - MAX_CORD));
    int yCord = toCords(s.frames[curFrameIndex][i]);

    if(isMove) {
      gfx.moveto(xCord, yCord);
      isMove = false;
    } else if(s.frames[curFrameIndex][i] == 255u && s.frames[curFrameIndex][i+1] == 255u) {
      isMove = true; // next point is a path start and is move operation
    } else 
      gfx.lineto(xCord, yCord);
  }

  gfx.display();
}
