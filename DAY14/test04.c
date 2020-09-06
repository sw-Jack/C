#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 5X5 �������� ������� �Ѵ�

// 1���� 25������ ���ڸ� 5X5 ũ���� �����ǿ� �������� ��ġ�Ϸ��� �Ѵ�
// ��� �ڸ��� ���ڰ� �������� ��ġ�� �� �ֵ��� �ڵ� ����

int main(void) {
	/*int arr[5][5];
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int ran = rand() % 25 + 1;
			arr[i][j] = ran;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j % 5 == 4) {
				printf("%2d\n\n", arr[i][j]);
			}
			else {
				printf("%2d\t", arr[i][j]);
			}
		}
	}*/
	
	/*int arr[25];
	srand((unsigned)time(NULL));
	int ran = rand() % 25 + 0;

	for (int i = 0; i < 25; i++) {
		arr[i] = ran + 1;
		if (arr[ran] == arr[ran - 1]) continue;
		if (i % 5 == 4) {
			printf("%2d\n\n", arr[i]);
		}
		else {
			printf("%2d\t", arr[i]);
		}
	}*/

	int arr[5][5] = { NULL };
	srand((unsigned)time(NULL));

	for (int i = 1; i <= 25; i++) {
		int row = rand() % 5;
		int col = rand() % 5;

		if (arr[row][col] == NULL) {
			arr[row][col] = i;
		}
		else {
			i--;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j % 5 == 4) {
				printf("%2d\n\n", arr[i][j]);
			}
			else {
				printf("%2d\t", arr[i][j]);
			}
		}
	}

	return 0;
}