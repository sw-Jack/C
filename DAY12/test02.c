#include <stdio.h>

int main(void) {


	//for (int i = 2; i <= 9; i++) {
	//	printf("<%d´Ü>\n", i);
	//	for (int j = 1; j <= 9; j++) {
	//		printf("%d X %d = %d\n", i, j, i*j);
	//	}
	//}

	for (int i = 1; i <= 9; i++) { 
		for (int j = 2; j <= 9; j++) {
			printf("%d X %d = %2d\t", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}