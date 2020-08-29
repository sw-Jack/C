#include <stdio.h>

int main(void) {

	int a = 10, b = 4, res;

	a < 0 ? printf("참인 경우 실행\n") : printf("거짓인 경우 실행\n");
	a % 2 == 0 ? printf("짝수\n") : printf("홀수\n");
	res = a > b ? a : b;
	printf("두 개의 수 중 큰 수 : %d\n", res);

	return 0;
}