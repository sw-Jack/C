#include <stdio.h>

int main(void) {

	// 돈을 저축하려 한다
	// 오늘 저축할 돈은 어제 저축한 돈의 2배로 할 예정이고 
	// 첫째날에 1원을 저축하려고 한다

	// (Q1) 30일 동안 통장에 저축될 돈을 얼마인가?
	// v1
	//int  sum = 0; 
	//int dep = 1;
	//for (int i = 1; i <= 30; i++) {
	//	sum += dep;
	//	dep *= 2;
	//}

	// (Q1) 30일 동안 통장에 저축될 돈을 얼마인가?
	// v2
	int  sum = 0; 
	int dep = 1;
	for (int i = 1; i <= 30; i++) { // for (int i = 1; i <= 30; dep *= 2, i++)
		sum += dep;
		printf("%d. 저축 금액 : %d, 총 저축 금액: %d원\n", i, dep, sum);
		dep *= 2;
	}

	printf("30일 동안 저축된 돈 : %d원\n", sum);
	return 0;
}