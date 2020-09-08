#include<stdio.h>

//두수를 비교하여 큰수 구하기 함수
//반환자료형	int
//함수명		big
//매개변수		int a,int b

int big(int a, int b);

int main(void) {


	int a = 1;
	int b = 2;

	int bi = big(a, b);

	printf("%d와 %d 중에 큰수 : %d\n", a, b, bi);


	return 0;
	//return
	// - 함수 종료
	// - while문에서 break와 비슷한역할
	// - 반환 값이 있을때는 return 뒤에 적어주어야 한다...
	// - return을 통해 호출했던 지점으로 반환값을 돌려준다...

}

int big(int a, int b) {
	if (a > b) {
		return a;
	}
	else if (b > a) {
		return b;
	}
	else {
		return 0;
	}
}