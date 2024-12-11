#include "owl.h"
#include "frog.h"
#include "penguin.h"

typedef struct { 
  int frameRate; 
  int frameCount;
  int loopCount;
  int* framePointCounts; 
  uint8_t** frames;
} scene;

int sceneCount = 3;
int sceneOverride = -1;
scene scenes[] {
  // interval, frame count, loop, counts, frames
  {12, owl_frameCount, 5, owl_framePointCounts, owl_frames},
  {22, frog_frameCount, 5, frog_framePointCounts, frog_frames},
  {16, penguin_frameCount, 5, penguin_framePointCounts, penguin_frames}
};