#include <stdio.h>

int main(void) {

	int num;

	printf("�Է� : ");
	scanf_s("%d", &num);

	// if(num % 6 == 0)
	if (num % 2 == 0 && num % 3 == 0) {
		printf("�Է��� ��  %d�� ¦���̸鼭 3�� ����Դϴ�\n", num);
	}
	else if (num % 2 != 0 && num % 3 == 0) {
		printf("�Է��� �� %d�� Ȧ���̸鼭 3�� ����Դϴ�\n", num);
	}
	else if (num % 2 == 0 && num % 3 != 0) {
		printf("�Է��� �� %d�� ¦���̸鼭 3�� ����� �ƴմϴ�\n", num);
	}
	else {
		printf("�Է��� �� %d�� Ȧ���̸鼭 3�� ����� �ƴմϴ�\n", num);
	}

	return 0;
}