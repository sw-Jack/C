#include <stdio.h>

// 팩토리얼 함수(재귀호출/함수)
int fact(int num) {

	if (num <= 1) return num;
	else return (num * fact(num - 1));
}

int main(void) {

	int num;
	
	printf("수 입력 : ");
	scanf_s("%d", &num);

	int factnum = fact(num);

	printf("%d! = %d\n", num, factnum);

	return 0;
}

// 피보나치 수열 함수(재귀호출/함수)
//#include <stdio.h>
//int fibo(int num) {
//
//	if (num <= 1) return num;
//	else return (fibo(num-1) + fibo(num-2));
//}
//
//int main(void) {
//
//	int num;
//
//	printf("수 입력 : ");
//	scanf_s("%d", &num);
//
//	int factnum = fibo(num);
//
//	printf("%d번째 피보나치 수열 = %d\n", num, factnum);
//
//	return 0;
//}

