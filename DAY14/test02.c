#include <stdio.h>

int main(void) {
	
	// 다차원 배열
	// - 배열의 배열
	// - 행과 열 차원의 중첩적인 구조를 이루는 배열...

	// 2차원 배열의 선언
	// 자료형 배열명[개수][개수]

	int arr[3][3] = { {1}, {1}, {1} };

	// 2차원 배열의 호출
	// 배열명[인덱스][인덱스]

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", arr[i][j]);
		}
		puts("");
	}
	
	return 0;
}