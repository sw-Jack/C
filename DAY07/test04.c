#include <stdio.h>

int main(void) {

	int num;

	printf("입력 : ");
	scanf_s("%d", &num);

	if (num % 5 == 0) {
		printf("결과 : 5의 배수입니다\n");
	}

	return 0;
}