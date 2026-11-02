#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
using namespace std;


int fib(long n, map<int,long>& memo) {
	if (memo.contains(n)) {
		return memo[n];
	}
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
		return memo[n];
	}
}

int main() {
	map<int, long> memo;

	int input = 0;
	cout << "정수 입력: " << endl;;
	cin >> input;
	
	cout << fib(input, memo) << endl;

	return 0;
}