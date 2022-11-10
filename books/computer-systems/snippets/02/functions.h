#ifndef CHAPTER_2_H
#define CHAPTER_2_H

#include <stdio.h>

#define SIZE(x) sizeof(x)/sizeof(x[0])

void show_bytes(unsigned char *start, size_t len);
void show_int(int x);
void show_float(float x);
void show_pointer(void *x);

#endif
