#include <stdio.h>

int main(void) {

	int a = 10, b = 4, res;

	a < 0 ? printf("���� ��� ����\n") : printf("������ ��� ����\n");
	a % 2 == 0 ? printf("¦��\n") : printf("Ȧ��\n");
	res = a > b ? a : b;
	printf("�� ���� �� �� ū �� : %d\n", res);

	return 0;
}