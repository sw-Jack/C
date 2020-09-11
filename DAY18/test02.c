#include <stdio.h>

int main(void) {

	char a = 'A';
	int b = 20;
	float c = 1.34f;
	double d = 3.141592;

	char *pt_a = &a;
	int *pt_b = &b;
	float *pt_c = &c;
	double *pt_d = &d;    // 포인터 변수 선언 및 각 변수 주소 포인터 변수에 대입

	printf("포인터 변수 pt_a가 가리키는 a 공간의 데이터 : %c\n", *pt_a);
	printf("포인터 변수 pt_a가 가리키는 a 공간의 주소 : %p\n", &pt_a);

	printf("포인터 변수 pt_b가 가리키는 b 공간의 데이터 : %d\n", *pt_b);
	printf("포인터 변수 pt_b가 가리키는 b 공간의 주소 : %p\n", &pt_b);

	printf("포인터 변수 pt_c가 가리키는 c 공간의 데이터 : %f\n", *pt_c);
	printf("포인터 변수 pt_c가 가리키는 c 공간의 주소 : %p\n", &pt_c);

	printf("포인터 변수 pt_d가 가리키는 d 공간의 데이터 : %f\n", *pt_d);
	printf("포인터 변수 pt_d가 가리키는 d 공간의 주소 : %p\n", &pt_d);

	return 0;
}