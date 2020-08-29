#include <stdio.h>

int main(void) {

	double a;

	a = 5 / 2;
	printf("공간 a에 담긴 값 = %f\n", a);
	
	a = (double)5 / 2;
	printf("공간 a에 담긴 값 = %f\n", a);

	return 0;
}