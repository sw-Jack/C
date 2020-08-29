#include <stdio.h>

int main(void) {

	// scanf
	// - 표준 입력 함수
	// - 키보드를 통해 데이터를 입력 받는 기능

	// scanf_s - 2012 버전 이상
	// scanf_s("서식문자열", &공간명);  -> 정수, 실수 입력 시
	// scanf_s("서식문자열", &공간명, sizeof(공간명));  -> 문자형 데이터(문자열 포함) 입력 시
	// "서식 문자열"
	// - 입력 받을 형식을 지정하는 문자열
	// - 불필요한 공백 또는 불필요한 문자가 있으면 입력받을 때 지장이 생김
	// - 반드시 입력받을 공간의 형식과 서식 문자의 형식은 일치되여야 함
	 //- short : %hd
	 //- int : %d
	 //- long : %ld
	 //- float : %f
	 //- double : %lf
	 //- char : %c
	 //- 문자열 : %s

	// & - 주소 연산자
	// - 모든 공간은 주소값을 가짐 
	// 

	// scanf - 2010 버전


	// 정수 입력
	/*int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	printf("num = %d\n", num);*/   // 전체 주석 처리 : 드래그 + Ctrl + k + c, 해제 : 드래그 + Ctrl + k + u


	// printf("num = %p\n", &num);    -> 해당 변수 주소값 출력 "%p / &"


	// 실수 입력(double)
	//double fs;
	//printf("정수 입력 : ");
	//scanf_s("%lf", &fs);
	//printf("fs = %.2lf\n", fs);

	// 문자 입력
	//char ch;
	//printf("문자 입력 : ");
	//scanf_s("%c", &ch, sizeof(ch));



	// 여러 개의 데이터 입력
	int a;
	char b;
	double c;

	printf("정수 문자 실수 입력 : ");
	scanf_s("%d %c %lf", &a, &b, sizeof(b), &c);
	printf("%d\t%c\t%lf\n", a, b, c);

	return 0;












}