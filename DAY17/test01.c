#include <stdio.h>

void star(int num) {
	for (int i = 0; i < num; i++) {
		printf("★");
	}
	printf("\n");
}
int main(void) {

	while (1) {

		int num;

		printf("정수 입력 : ");
		scanf_s("%d", &num);

		star(num);
	}

	return 0;
}