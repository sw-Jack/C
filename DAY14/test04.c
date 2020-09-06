#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 5X5 빙고판을 만드려고 한다

// 1부터 25까지의 숫자를 5X5 크기의 빙고판에 무작위로 배치하려고 한다
// 모든 자리에 숫자가 랜덤으로 배치될 수 있도록 코드 구현

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