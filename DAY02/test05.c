#include <stdio.h>

int main(void) {
	
	// %d - 정수를 담당하는 서식 문자

	// 입력되는 데이터와 서식 문자의 개수는 반드시 일치해야 한다.
	printf("%d + %d = %d\n", 5, 12, 5 + 12);

	printf("%d + %d = \n", 5, 12, 5 + 12);

	printf("%d + %d = %d\n", 5, 12);

	return 0;
}