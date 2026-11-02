#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int factorial(int n, int p, int temp) {
	if (p == n) {
		return temp * p;
	}
	temp *= p;
	factorial(n, p + 1, temp);
}
int main() {
	std::cout << "정수 입력: ";
	int input;
	std::cin >> input;
	int temp = factorial(input, 1, 1);
	std::cout << "팩토리얼: " << temp << std::endl;
}