#include <stdio.h>

int input() {
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);
	return num;
}

int reverse(int num) {
	num = -num;
	return num;    // return -num;
}

int main(void) {
	while (1) {
		int num = input();
		int rnum = reverse(num);
		printf("%d의 보수는 %d입니다.\n\n", num, rnum);
	}
		return 0;
}