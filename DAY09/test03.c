#include <stdio.h>

int main(void) {
	// 1���� 10������ �� ���ϱ�

	int i = 1;
	int sum = 0;

	while (i <= 10) {
		sum = sum + i;
		i++;
	}

	printf("1���� 10������ �� : %d\n", sum);

	return 0;
}