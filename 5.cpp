#include <iostream>
#include <cstdint>
using ll = unsigned long long;

bool evenlyDivisible(ll n) {
	for (uint8_t i = 1; i <= 20; ++i) {
		if (n % i != 0) return false; 
	}
	return true;
}

int main() {
	ll n{2520};
	while (!evenlyDivisible(n)) n++;
	std::cout << n;
	return 0;
}
