#include <stdio.h>

int input() {
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	return num;
}

int reverse(int num) {
	num = -num;
	return num;    // return -num;
}

int main(void) {
	while (1) {
		int num = input();
		int rnum = reverse(num);
		printf("%d�� ������ %d�Դϴ�.\n\n", num, rnum);
	}
		return 0;
}