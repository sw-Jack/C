#include <stdio.h>

int main(void) {

	int arr[5] = { 3, 5, 1, 2, 4 };
	for (int i = 0; i < 4; i++) {
		int min = i;

		for (int j = i + 1; j < 5; j++) {
			if (arr[min] > arr[j]) {
				min = j;
			}
		}
		if (min != i) {
			int tmp = arr[min];
			arr[min] = arr[i];
			arr[i] = tmp;
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%-2d", arr[i]);
	}
	printf("\n");


	return 0;
}