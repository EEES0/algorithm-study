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

		for (int j = 0; j < 99999 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}



	FILE* fp2;
	fp2 = fopen("../bubble_sort.txt", "w");

	for (int i = 0; i < 100000; i++) {
		fprintf(fp2, "%d\n", arr[i]);
	}
	fclose(fp2);

}