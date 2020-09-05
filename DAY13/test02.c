#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	// 주사위를 10번 던진 결과를 저장하려고 한다
	// 배열을 이용하여 저장을 구현하고 아래의 결과를 출력하시오

	// [1] 전체 주사위 기록을 출력
	// (예) 1번째 : 5, 2번째 : 2, ...
	// [2] 짝수 주사위 기록을 출력
	// [3] 주사위 값들의 합계 출력

	int arr[10] = { NULL };
	int sum = 0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		int rdnum = rand() % 6 + 1;
		printf("%d번째 주사위 : %d\n", i+1, rdnum);
		arr[i] = rdnum;
		sum += rdnum;
		if ((i+1) % 2 == 0) {
			printf("-> 짝수 %d번째 주사위 기록 : %d\n", i+1, arr[i]);
		}
	}

	printf("주사위 값들의 총합 : %d\n", sum);

	//int arr[10] = { 2, 4, 1, 6, 4, 3, 3, 1, 1, 5 };
	//int sum = 0;

	//for (int i = 0; i < 10; i++) {
	//	printf("%d번째 주사위 : %d\n", i + 1, arr[i]);
	//	sum += arr[i];
	//}
	//printf("\n");
	//for (int j = 0; j < 10; j++) {
	//	if ((j+1) % 2 == 0) {
	//		printf("짝수 %d번째 주사위 : %d\n", j + 1, arr[j]);
	//	}
	//}
	//printf("\n주사위 값들의 총합 : %d\n", sum);

	return 0;
}