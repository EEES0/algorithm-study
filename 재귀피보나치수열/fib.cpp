#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <chrono>
using namespace std;


int fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}

int main() {

	int input = 0;
	cout << "정수 입력: " << endl;;
	cin >> input;

	cout << fib(input) << endl;

	return 0;
}