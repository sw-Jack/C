#include <stdio.h>

int main(void) {

	int num;

	printf("���� �Է� :  ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("%d�� ¦���Դϴ�\n", num);
	}

	/*if (num % 2 == 1) {
		printf("%d�� Ȧ���Դϴ�\n", num);
	}*/
	else {
		printf("%d�� Ȧ���Դϴ�\n", num);
	}

	return 0;
}