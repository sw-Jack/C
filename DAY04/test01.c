#include <stdio.h>

int main(void) {

	// 나이를 저장하는 변수 선언
	int age;

	// 키를 저장하는 변수 선언
	float height;
	double hei;
	
	// sizeof()
	// - 공간의 크기를 알려주는 연산자
	// - byte 단위로 알려준다
	// - 괄호 안에 자료형, 변수명, 공간명, 연산식...
	printf("int의 크기 : %d\n", sizeof(int));
	printf("age의 크기 : %d\n", sizeof(age));

	printf("float의 크기 : %d\n", sizeof(float));
	printf("height의 크기 : %d\n", sizeof(height));



	return 0;
}