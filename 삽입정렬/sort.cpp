#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	FILE* fp;
	fp = fopen("../data.txt", "r");
	int arr[100000];

	for (int i = 0; i < 100000; i++) {
		fscanf(fp, "%d", &arr[i]);
	}
	fclose(fp);


	for (int i = 0; i < 99999; i++) {
		int key = arr[i + 1];
		for (int j = i; j >= 0; j--) {
			if (key < arr[j]) {
				arr[j + 1] = arr[j];
				arr[j] = key;
			}
			else continue;
		}
	}



	FILE* fp2;
	fp2 = fopen("../insertion_sort.txt", "w");

	for (int i = 0; i < 100000; i++) {
		fprintf(fp2, "%d\n", arr[i]);
	}
	fclose(fp2);

}