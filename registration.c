#include <stdio.h>
#include <math.h>
#include <stdint.h>

#define DIM 598000
int main(void) {
	uint64_t sum = 0;
	for (uint64_t i = 1; i <= DIM; ++i) {
		sum += ((uint64_t)(i * i) % 2 == 1) ? (uint64_t)(i * i) : 0;
	}
	printf(" %llu ", sum);
}
