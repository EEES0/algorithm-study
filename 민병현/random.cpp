#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <random> 

using namespace std;
int main() {
	int data[100000];
	FILE* fp;
	fp = fopen("../data.txt", "w");
	for (int i = 0; i < 100000; i++) {
		data[i] = i;
	}
	for (int i = 0; i < 100000; i++) {
		int a1 = rand();
		int a2 = rand();
		int b1 = rand();
		int b2 = rand();
		int a = (a1 * a2) % 100000;
		int b = (b1 * b2) % 100000;
		int c = data[a];
		data[a] = data[b];
		data[b] = c;
	}
	for (int i = 0; i < 100000; i++) {
		fprintf(fp, "%d\n", data[i]);
	}
	fclose(fp);
}