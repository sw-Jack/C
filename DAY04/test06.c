#include <stdio.h>

int main(void) {

	double a;

	a = 5 / 2;
	printf("���� a�� ��� �� = %f\n", a);
	printf("����� 5/2 �� ��� ���� ũ�� = %d\n", sizeof(5 / 2));
	printf("���� a�� ���� ũ�� = %d\n", sizeof(a));

	a = 5 / 2.0;
	printf("���� a�� ��� �� = %f\n", a);
	printf("����� 5/2.0 �� ��� ���� ũ�� = %d\n", sizeof(5 / 2.0));
	printf("���� a�� ���� ũ�� = %d\n", sizeof(a));


	return 0;
}