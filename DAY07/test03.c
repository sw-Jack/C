#include <stdio.h>

int main(void) {

	int num;

	printf("정수 입력 :  ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d는 짝수입니다\n", num);
	}

	/*if (num % 2 == 1) {
		printf("%d는 홀수입니다\n", num);
	}*/
	else {
		printf("%d는 홀수입니다\n", num);
	}

	return 0;
}