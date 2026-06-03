#include <fstream>
#include <iostream>
#include <cmath>
#include <cstdint>

double power(uint64_t base, uint64_t exp) {
	return std::log(base) * exp;
}




int main() {
	uint64_t base{};
	uint64_t exp{};

	std::string sbase{};
	std::string sexp{};
	int current{0};
	int greatest{0};
	double vg{0};
	std::ifstream inf("0099_base_exp.txt");
	while (
		std::getline(inf, sbase, ',') &&
		std::getline(inf, sexp)
	) {
		++current;
		base = static_cast<uint64_t>(std::stoull(sbase));
		exp = static_cast<uint64_t>(std::stoull(sexp));
		std::cout << base << " " << exp << std::endl;
		if ( vg < power(base, exp)) {
			greatest = current;
			vg = power(base, exp);
		}
	}
	std::cout << std::endl << std::endl << greatest;
	return 0;
}
