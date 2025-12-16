#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index) {
	if (index == 0 || index > 64) return 0; // tried to supplied -1, but it seems correct, becuase it still returns 0
	uint64_t num_of_grains = 1ull << (index - 1); // I don't need 1 at all, because it just multiply to itself?? xd
	return num_of_grains;
}

uint64_t total(void) {
	return UINT64_MAX; // this is very cool along with the use of 1ull, idk why
	// return (uint64_t)-1; // this seems to work to based on Borderite of writing of total grains
}
