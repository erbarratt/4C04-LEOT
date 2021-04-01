#include <string.h>
#include <stdio.h>
#include <stdint-gcc.h>
#include <stdlib.h>
#include <stdbool.h>
#include <X11/Xlib.h>

void draw_hex(uint32_t hex, size_t size, char * dest);
void draw_string(Display * display, Window window, GC gc, unsigned long color, int x, int y, char * str);
void draw_cpu(Display * display, Window window, GC gc);
void draw_ram(Display * display, Window window, GC gc);
void draw_code(Display * display, Window window, GC gc, uint8_t addr);
void draw_all(Display * display, Window window, GC gc);
void code_disassemble();
