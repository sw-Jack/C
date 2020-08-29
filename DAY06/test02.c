#include <stdio.h>

int main(void) {

	//  buffer
	// - 데이터의 처리 속도나 처리 단위, 데이터의 사용 시간이 서로 다른 두 장치나
	//   프로그램 사이에서 데이터를 주고받기 위한 목적으로 사용되는 임시 기억 장치

	// - 키보드에서 데이터를 입력 받을 때는 키보드의 키 값이 버퍼 안에 저장된다
	// - 공백 문자를 기준으로 데이터를 구분 짓는다.
	// - 정수 실수 문자열은 첫번째 공백 문자를 무시하지만 문자는 그대로 받아들인다.
	// - 어떠한 데이터를 입력받고 난 후에 문자를 입력할 때는 버퍼의 공백 문자를 제거해주어야 한다.

	int age;
	char bt;
	double height;

	printf("나이 : ");
	scanf_s("%d", &age);
	// 2012 버전 이상 
	// getchar();  -> 문자 하나를 입력 받는 표준 입력 함수

	// 2010 버전
	// fflush(stdin);  -> 버퍼를 비우는 함수

	printf("혈액형 : ");
	scanf_s("%c", &bt, sizeof(bt));

	printf("키 : ");
	scanf_s("%lf", &height);

	printf("나이 : %d\n혈액형 : %c\n키 : %.2lf\n", age, bt, height);
	
	return 0;
}