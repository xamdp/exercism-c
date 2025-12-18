#include "resistor_color.h"

short color_code(short code) {
    resistor_band_t color = code;
    return color;
}

const resistor_band_t *colors() {
    static const resistor_band_t bands[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
		GREEN, BLUE, VIOLET, GREY, WHITE
	};
	return bands;
}
