#include <stdio.h>

int main(void) {

	// 정수형 자료가 5개 들어가는 배열 arr을 선언하고 각각의 요소에 10, 20, 30 ,40 ,50을 
	// 차례대로 넣고 출력

	int arr[5] = {10, 20, 30, 40, 50};

	/*int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;*/


	// 배열은 연속적인 공간을 할당 받아 인덱스를 통해
	// 순차적인 접근이 가능하여 다량의 데이터를 처리하기에 용이하다
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);


	/*int arr[5];
	int i = 10;
	for (int j = 0; j < 5; j++) {
		arr[j] = i;
		i += 10;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}*/

	return 0;
}