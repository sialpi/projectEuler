#include <iostream>
using ll =unsigned long long;
int main() {
	ll reach{600851475143};
	for (ll i =  2; i < reach; ++i) {
		if (reach % i == 0) {
			reach /= i;
			i = 2;
		}
	}
	std::cout <<reach;
	return 0;
}
