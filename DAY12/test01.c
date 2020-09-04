#include <stdio.h>

int main(void) {


	for (int i = 0; i < 5; i++) {
		printf("%d번째 외부 for문 실행\n", i);

		for (int j = 0; j < 5; j++) {
			printf("%d번째 내부 for문 실행\n", j);
		}
	}


	return 0;
}