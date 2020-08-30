#include <stdio.h>

int main(void) {

	int num;

	printf("입력 : ");
	scanf_s("%d", &num);

	// if(num % 6 == 0)
	if (num % 2 == 0 && num % 3 == 0) {
		printf("입력한 수  %d는 짝수이면서 3의 배수입니다\n", num);
	}
	else if (num % 2 != 0 && num % 3 == 0) {
		printf("입력한 수 %d는 홀수이면서 3의 배수입니다\n", num);
	}
	else if (num % 2 == 0 && num % 3 != 0) {
		printf("입력한 수 %d는 짝수이면서 3의 배수가 아닙니다\n", num);
	}
	else {
		printf("입력한 수 %d는 홀수이면서 3의 배수가 아닙니다\n", num);
	}

	return 0;
}