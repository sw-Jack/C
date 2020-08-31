#include <stdio.h>
#include <stdlib.h> // rand 함수가 추가되어 있는 헤더 파일
#include <time.h> // 시간에 관련된 함수가 정의되어 있는 헤더 파일
int main(void) {

	// rand() 
	// - 어떠한 기준(seed)에 의해 0 ~ 32767 까지의 임의의 정수를 구하는 함수

	// srand()
	// - rand 함수의 seed 값을 설정하는 함수
	// - srand 함수의 괄호 안에는 보통 time 함수의 반환값을 넣어준다

	// time()
	// - 1970년 1월 1일 0시 0분 0초 부터 지금까지의 시간을 초 단위로 반환하는 함수

	srand((unsigned)time(NULL));

	// 범위 안의 임의의 수 구하기
	// rand() % 범위의 숫자 개수 + 시작수


	return 0;
}