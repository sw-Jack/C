#include <stdio.h>

int main(void) {

	double a;

	a = 5 / 2;
	printf("공간 a에 담긴 값 = %f\n", a);
	printf("연산식 5/2 의 결과 공간 크기 = %d\n", sizeof(5 / 2));
	printf("변수 a의 공간 크기 = %d\n", sizeof(a));

	a = 5 / 2.0;
	printf("공간 a에 담긴 값 = %f\n", a);
	printf("연산식 5/2.0 의 결과 공간 크기 = %d\n", sizeof(5 / 2.0));
	printf("변수 a의 공간 크기 = %d\n", sizeof(a));


	return 0;
}