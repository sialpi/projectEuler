#include <iostream>
#include <cstdint>

bool multiple(uint64_t base, uint64_t compar) {
	return !(base % compar);
}

int main() {
	uint64_t sum{};
	for (int i = 1; i < 1000; ++i) {
		if (multiple(i, 5) || multiple(i, 3)) {
			sum += i;
		}
	}
	std::cout << sum;
}
