#include <stdio.h>

int main(void) {
	// 10~20 사이의 숫자만 입력 받아 1부터 입력 받은 수까지의 합을 구하시오

	int i = 1, sum = 0;
	int inum;
	while (1) {
		printf("숫자 입력 : ");
		scanf_s("%d", &inum);

		if (inum >= 10 && inum <= 20) break;
	}
	while (i <= inum) {
		sum = sum + i;
		i++;
	}
	printf("1부터 %d까지의 합 : %d\n", inum, sum);

	return 0;
}