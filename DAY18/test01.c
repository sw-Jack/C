#include <stdio.h>

// 주소 체계
// - 1byte 당 하나의 주소값이 정해져 있다
// - 16진수로 표현된다
// - 32bit 컴퓨터에서는 4byte의 크기를 가지고 64bit 컴퓨터에서는 8byte의 크기를 가진다


// 포인터
// - 주소값을 저장하고 관리하는 변수
// - 주소값에 해당한는 공간의 접근 및 제어를 위해서 사용한다
// - 주로 매개변수에서 사용된다
// - 포인터 크기는 시스템에 따라 그 크기가 달라진다


int main(void) {
	
	int a = 10;

	// 포인터 선언
	// - 형식
	// 내가 가리키고자 하는 공간의 자료형 *포인터명;
	// 포인터 타입 포인터명
	// 자료형 변수명;

	// - 포인터 타입
	// - 주소값에 해당하는 공간의 크기 및 형식을 알기 위해 자료형마다 각각 나누어 적어야 한다
	int *pt = &a;

	printf("a 공간의 데이터 : %d\n", a);
	printf("a 공간의 주소 : %p\n", &a);
	printf("pt 공간의 데이터 : %p\n", pt);
	printf("pt 공간의 주소 : %p\n", &pt);


	// * (간접 참조 연산자)
	// - 주소값에 해당하는 공간을 참조하는 연산자

	printf("pt 공간이 가리키는 공간의 데이터 : %d\n", *pt);
	*(&a) = 20;
	printf("pt 공간이 가리키는 공간의 데이터 : %d\n", *pt);
	*pt = 30;
	printf("pt 공간이 가리키는 공간의 데이터 : %d\n", *pt);

	int b = 10;
	
	pt = &b;

	return 0;
}