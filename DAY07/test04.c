#include <stdio.h>

int main(void) {

	int num;

	printf("�Է� : ");
	scanf_s("%d", &num);

	if (num % 5 == 0) {
		printf("��� : 5�� ����Դϴ�\n");
	}

	return 0;
}