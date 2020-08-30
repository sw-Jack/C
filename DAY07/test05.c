#include <stdio.h>

int main(void) {

	int num;

	printf("수 입력 : ");
	scanf_s("%d", &num);

	if (num > 0 && num < 100) {
		printf("정상\n");
	}
	else {
		printf("비정상\n");
	}

	return 0;
}