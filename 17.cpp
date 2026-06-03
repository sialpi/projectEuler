#include <iostream>
#include <cstdint>
enum class numbers{
	ZERO = 0,
	ONE = 3,
	TWO = 3,
	THREE = 5,
	FOUR = 4,
	FIVE = 4,
	SIX = 3,
	SEVEN = 5,
	EIGHT = 5,
	NINE = 4,
	TEN = 3,
	ELEVEN = 6,
	TWELVE = 6,
	THIRTEEN = 8,
	FOURTEEN = 8,
	FIFTEEN = 7,
	SIXTEEN = 7,
	SEVENTEEN = 9,
	EIGHTEEN = 8,
	NINETEEN = 7,
	TWENTY = 6
	// TEN == ONE so..
};
using enum numbers;

void cifre(int d[], int n) {
	d[0] = n / 100;
	d[1] = (n / 10) % 10;
	d[2] = n % 10;
}

int andEx() {
	return 3 * 99 * 9;
}

int except() {
	return andEx();
}

int main(void) {
	
	int a[20] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4,
				3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
	int d[10] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};
	int sum{0};
	int n[3];
	for (int i = 1; i < 1000; ++i) {
		cifre(n, i);
		sum += a[n[0]];
		
		if (n[1] == 1) {
			sum += a[10 + n[2]]; 
		} else {
			sum += d[n[1]];
			sum += a[n[2]];
		}


	}
	sum += except();
	sum += 900 * 7;
	sum += 11; // 1000
	std::cout << sum;
}
