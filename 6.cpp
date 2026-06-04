#include <iostream>
#include <cstdint>
using ll = long long;
constexpr ll squareSum() {
	constexpr ll n{(100+1)*100/2};
	return n*n;
}

constexpr ll sumSquare() {
	ll sum{0};
	for (uint8_t i = 0; i <= 100; ++i) {
		sum += i * i;
	}
	return sum;
}
int main() {
	constexpr ll diff{squareSum() - sumSquare()};
	std::cout << diff << std::endl;
	return 0;
}
