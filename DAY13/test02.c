#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	// �ֻ����� 10�� ���� ����� �����Ϸ��� �Ѵ�
	// �迭�� �̿��Ͽ� ������ �����ϰ� �Ʒ��� ����� ����Ͻÿ�

	// [1] ��ü �ֻ��� ����� ���
	// (��) 1��° : 5, 2��° : 2, ...
	// [2] ¦�� �ֻ��� ����� ���
	// [3] �ֻ��� ������ �հ� ���

	int arr[10] = { NULL };
	int sum = 0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		int rdnum = rand() % 6 + 1;
		printf("%d��° �ֻ��� : %d\n", i+1, rdnum);
		arr[i] = rdnum;
		sum += rdnum;
		if ((i+1) % 2 == 0) {
			printf("-> ¦�� %d��° �ֻ��� ��� : %d\n", i+1, arr[i]);
		}
	}

	printf("�ֻ��� ������ ���� : %d\n", sum);

	//int arr[10] = { 2, 4, 1, 6, 4, 3, 3, 1, 1, 5 };
	//int sum = 0;

	//for (int i = 0; i < 10; i++) {
	//	printf("%d��° �ֻ��� : %d\n", i + 1, arr[i]);
	//	sum += arr[i];
	//}
	//printf("\n");
	//for (int j = 0; j < 10; j++) {
	//	if ((j+1) % 2 == 0) {
	//		printf("¦�� %d��° �ֻ��� : %d\n", j + 1, arr[j]);
	//	}
	//}
	//printf("\n�ֻ��� ������ ���� : %d\n", sum);

	return 0;
}