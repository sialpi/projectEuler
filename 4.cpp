#include <iostream>
#include <cmath>
using ll = long long;

bool mcmInHundreds(ll n) {
	int first{};
	for (int i = 100; i <= 999; ++i) {
		if (n % i == 0) {
			first = i;
			int copy = n;
			copy /= first;
			if (copy >= 100 && n<= 999) {
				break;
			}
		}
	}
	if (first == 0) return false;
	n /= first;
	if (n >= 100 && n <= 999) {
		std::cout << first << " " << n << std::endl;
		return true;
	}
	return false;
}


bool palindrome(ll n) {
	int8_t d[6]{};
	for (int j = 0; j < 6; ++j) {
		d[5-j] = static_cast<int>((n / pow(10, j))) % 10;
	}
	for (int i = 0; i < 6; ++i) {
		if (d[i] != d[5-i]) return false;
	}
	return true;
}

int main() {
	constexpr ll MAX{999*999};
	constexpr ll MIN{100'000};
	for (ll i = MAX; i >= MIN; --i) {
		if (palindrome(i)) {
			if (mcmInHundreds(i)) {
				std::cout << i;
				break;
			}
		}
	}
 	return 0;
}
