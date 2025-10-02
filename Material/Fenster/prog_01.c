// main.c
#include "fenster.h"
#define W 640
#define H 480
int main() {
  uint32_t buf[W * H];
  struct fenster f = { .title = "Chao", .width = W, .height = H, .buf = buf };
  fenster_open(&f);
  while (fenster_loop(&f) == 0) {
    for (int i = 0; i < W; i++) {
      for (int j = 0; j < H; j++) {
        fenster_pixel(&f, i, j) = rand();
      }
      printf("%d\n", i);
    }
  }
  fenster_close(&f);
  return 0;
}

// cc prog_01.c -framework Cocoa -framework AudioToolbox -o prog_01.hac && ./prog_01.hac