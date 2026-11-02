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


	for (int i = 99999; i > 0; i--) {
		int max = 0;
		for (int j = 1; j <= i; j++) {

			if (arr[j] > arr[max]) {
				max = j;
			}

		}
		int temp = arr[max];
		arr[max] = arr[i];
		arr[i] = temp;

	}



	FILE* fp2;
	fp2 = fopen("../select_sort.txt", "w");

	for (int i = 0; i < 100000; i++) {
		fprintf(fp2, "%d\n", arr[i]);
	}
	fclose(fp2);

}