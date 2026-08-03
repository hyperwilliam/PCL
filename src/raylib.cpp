// Platform Compatibility Layer For: Raylib
#include "raylib.h"
bool createWindow() { // returns true if success
  InitWindow(640,480,"PCL Window");
  if (!IsWindowReady()) {
    return false;
  }
  SetTargetFPS(60);
  return true;
}

bool destroyWindow() {
  CloseWindow();
  return true;
}

bool ifWinClose() {
  return !WindowShouldClose();
}

bool drawStart() { // not sure how this would work on non-raylib... stub?
  BeginDrawing();
  return true;
}
bool drawEnd() {
  EndDrawing();
  return true;
}
bool Print(const char *text, int posX, int posY, int fontSize) {//, Color color) {
  DrawText(text, posX, posY, fontSize, DARKGRAY);
  return true;
}
