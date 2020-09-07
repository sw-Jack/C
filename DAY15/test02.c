#include <stdio.h>

int main(void) {

	// 문자열 입력
	char name[10];

	printf("이름 입력 :  ");
	// scanf_s("%s", name, sizeof(name));
	// gets_s(공간 주소값, 입력 받을 공간의 크기);
	gets_s(name, sizeof(name));

	// - 문자열을 입력 받는 표준 입력 함수
	// - 공백 문자를 기준으로 데이터를 구분하는 것이 아니라 오직 엔터(\n)를 기준으로 데이터를 구분한다
	// - 버퍼에 엔터값이 남아 있으면 데이터로 간주하여 입력받는다

	printf("이름 : %s\n", name);


	return 0;
}