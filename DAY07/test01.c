#include <stdio.h>

int main(void) {

	double dnum;
	char a, b, c;
	int eng, kor, math;
	int age;
	double height, weight;

	printf("�Ǽ� �Է� : ");
	scanf_s("%lf", &dnum);
	printf("�Է��� �Ǽ� = %lf\n\n", dnum);

	getchar();
	printf("�ڽ��� �̴ϼ� �Է� :  ");
	scanf_s("%c %c %c", &a, 1, &b, 1, &c, 1);
	printf("�Է��� �̴ϼ� = %c%c%c\n\n", a, b, c);

	printf("������ ������ ���� �Է� : ");
	scanf_s("%d %d %d", &eng, &kor, &math);
	printf("������ �հ� : %d\n������ ��� : %d\n\n", eng + kor + math, (eng + kor + math) / 3);

	printf("���� �Է� : ");
	scanf_s("%d", &age);

	printf("Ű �Է� : ");
	scanf_s("%lf", &height);

	printf("������ �Է� : ");
	scanf_s("%lf", &weight);
	printf("���� : %d\nŰ : %lf\n������ : %lf\n", age, height, weight);
	return 0;
}