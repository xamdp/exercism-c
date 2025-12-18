#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

#include <stdint.h>
#include <stdio.h>

typedef enum {
	BLACK, BROWN, RED, ORANGE, YELLOW,
	GREEN, BLUE, VIOLET, GREY, WHITE, END,
} resistor_band_t;


short color_code(short code);
const resistor_band_t* colors();

#endif
