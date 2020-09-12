#include <stdio.h>
#include <string.h>

typedef struct Info {

	char name[10];
	int age;
} in;

int main(void) {

	// 구조체 배열
	// -  구조체 가지고 만든 배열
	// - 배열의 요소가 구조체 공간인 배열

	// 배열 선언
	// - 자료형 배열명[개수];

	in arr[2] = { {"김민준",20},{"음문석",30} };  // 중괄호 생략 가능

	// 구조체 배열 호출
	// 배열명[인덱스].멤버필드명

	for (int i = 0; i < 2; i++) {
		printf("이름 : %s\n", arr[i].name);
		printf("나이 : %d\n", arr[i].age);
	}





	return 0;
}