#include <stdio.h>

int main(void) {

	int a = 5, b = 7;

	if (a < b) {
		printf("참이므로 출력됨\n");
	}

	if (a > b) {
		printf("거짓이므로 출력 안됨\n");
	}

	return 0;
}