#include "owl.h"
#include "frog.h"
#include "penguin.h"
#include "mushroom_pat.h"
#include "scissors.h"
#include "bluey.h"
#include "diff_growth.h"
#include "vector_scope.h"
#include "cube.h"
#include "water_wheel.h"
#include "space_path.h"
#include "mario.h"
#include "pingu.h"
#include "kirby.h"
#include "powering_up.h"
#include "sheep.h"

typedef struct { 
  const int frameRate; 
  const int frameCount;
  const int loopCount;
  const int* framePointCounts; 
  const uint8_t** frames;
} scene;

int sceneCount = 15;
int sceneOverride = -1;
scene scenes[] {
  // fps, frame count, loop, counts, frames
  {14, powering_up_frameCount, 99, powering_up_framePointCounts, powering_up_frames},

  {12, vector_scope_frameCount, 1, vector_scope_framePointCounts, vector_scope_frames},
  {12, owl_frameCount, 5, owl_framePointCounts, owl_frames},
  {20, cube_frameCount, 2, cube_framePointCounts, cube_frames},
  {16, bluey_frameCount, 5, bluey_framePointCounts, bluey_frames},
  {16, space_path_frameCount, 6, space_path_framePointCounts, space_path_frames},
  { 8, scissors_frameCount, 1, scissors_framePointCounts, scissors_frames},
  {20, kirby_frameCount, 2, kirby_framePointCounts, kirby_frames},
  {16, diff_growth_frameCount, 1, diff_growth_framePointCounts, diff_growth_frames},
  {22, frog_frameCount, 5, frog_framePointCounts, frog_frames},
  {12, mushroom_pat_frameCount, 1, mushroom_pat_framePointCounts, mushroom_pat_frames},
  {14, sheep_frameCount, 2, sheep_framePointCounts, sheep_frames},
  // {24, water_wheel_frameCount, 4, water_wheel_framePointCounts, water_wheel_frames},
  {16, penguin_frameCount, 5, penguin_framePointCounts, penguin_frames},
  {16, mario_frameCount, 1, mario_framePointCounts, mario_frames},
  {14, pingu_frameCount, 2, pingu_framePointCounts, pingu_frames},
};