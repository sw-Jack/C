#include <stdio.h>

int main(void) {
	// 10~20 ������ ���ڸ� �Է� �޾� 1���� �Է� ���� �������� ���� ���Ͻÿ�

	int i = 1, sum = 0;
	int inum;
	while (1) {
		printf("���� �Է� : ");
		scanf_s("%d", &inum);

		if (inum >= 10 && inum <= 20) break;
	}
	while (i <= inum) {
		sum = sum + i;
		i++;
	}
	printf("1���� %d������ �� : %d\n", inum, sum);

	return 0;
}