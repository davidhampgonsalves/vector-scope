#include <Arduino.h>
#include <driver/dac.h>
#include <math.h>

#include "FastDAC.h"
#include "scene.h"
#include "data.h"

void setup() 
{
  dac_output_enable(DAC_CHANNEL_1);
  dac_output_enable(DAC_CHANNEL_2);

  Serial.begin(115200);
}

unsigned long previousMillis = 0;
int curFrameIndex = 0;

void loop() {
  unsigned long currentMillis = millis();
  int curSceneIndex = 0;
  int loopCount = 0;
  
  scene s = scenes[sceneOverride < 0 ? curSceneIndex : sceneOverride];
  if (currentMillis - previousMillis >= s.frameInterval) {
    previousMillis = currentMillis;

    curFrameIndex += 1; 
    if(curFrameIndex >= s.frameCount) { 
      curFrameIndex = 0; 
      loopCount += 1;
      if(loopCount >= s.loopCount) {
        curSceneIndex += 1;
        if(curSceneIndex >= sceneCount) { curSceneIndex = 0; }
        loopCount = 0;
      }
    }
  }

  DACPrepare(true);
  for(int i=0 ; i < s.framePointCounts[curFrameIndex] ; i += 2) {
    if(s.frames[curFrameIndex][i] == 500) continue;
    // dac_output_voltage(DAC_CHANNEL_1, abs(frames[curFrameIndex][i + 1] - 256));
    // dac_output_voltage(DAC_CHANNEL_2, frames[curFrameIndex][i] );
    DAC1Write( abs(s.frames[curFrameIndex][i + 1] - 256));
    DAC2Write( s.frames[curFrameIndex][i] );
  }
  DACUnprepare(true);
}