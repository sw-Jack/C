#include <stdio.h>

int main(void) {

	char a = 'A';
	int b = 20;
	float c = 1.34f;
	double d = 3.141592;

	char *pt_a = &a;
	int *pt_b = &b;
	float *pt_c = &c;
	double *pt_d = &d;    // ������ ���� ���� �� �� ���� �ּ� ������ ������ ����

	printf("������ ���� pt_a�� ����Ű�� a ������ ������ : %c\n", *pt_a);
	printf("������ ���� pt_a�� ����Ű�� a ������ �ּ� : %p\n", &pt_a);

	printf("������ ���� pt_b�� ����Ű�� b ������ ������ : %d\n", *pt_b);
	printf("������ ���� pt_b�� ����Ű�� b ������ �ּ� : %p\n", &pt_b);

	printf("������ ���� pt_c�� ����Ű�� c ������ ������ : %f\n", *pt_c);
	printf("������ ���� pt_c�� ����Ű�� c ������ �ּ� : %p\n", &pt_c);

	printf("������ ���� pt_d�� ����Ű�� d ������ ������ : %f\n", *pt_d);
	printf("������ ���� pt_d�� ����Ű�� d ������ �ּ� : %p\n", &pt_d);

	return 0;
}