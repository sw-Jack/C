#include <stdio.h>
#include <string.h>

typedef struct Info {

	// 사람의 정보 - 이름, 나이...
	char name[10];
	int age;
	// struct Info* in;
}IN;

int main(void) {

	IN in = { "김민준", 20 };

	// 구조체 포인터
	// - 구조체 공간을 가리키는 포인터 변수
	IN *pt = &in;

	// -> (간접 멤버 참조 연산자)
	// - 주소값에 해당하는 구조체 또는 공용체 공간의 멤버를 참조하는 연산자

	

	printf("나이 : %d\n", pt->age);
	printf("이름 : %s\n", (*pt).name);

	return 0;
}