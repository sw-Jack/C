#include <stdio.h>

int main(void) {

	int num;

	printf("�� �Է� : ");
	scanf_s("%d", &num);

	if (num > 0 && num < 100) {
		printf("����\n");
	}
	else {
		printf("������\n");
	}

	return 0;
}