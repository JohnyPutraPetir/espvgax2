#include <ESPVGAX2.h>

ESPVGAX2 vga;

void loop() {
  while (1) { 
    //never return from loop(). never call delay() or yield() functions
    vga.clear(vga.rand() % 256);
  }
}
void setup() {
  vga.begin();
}