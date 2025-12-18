#include "resistor_color.h"

short color_code(resistor_band_t code) {
    return code;
}

const resistor_band_t *colors() {
    static const resistor_band_t bands[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
		GREEN, BLUE, VIOLET, GREY, WHITE
	};
	return bands;
}
