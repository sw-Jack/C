#include <stdio.h>
#include <string.h> // 문자열에 관한 함수들이 정의된 헤더파일

int main(void) {

	// 문자열 데이터는 선언과 동시에 초기화는 가능하지만 대입연산자로 인한 데이터 변경은 불가
	// 문자열은 다른 데이터보다 관리하기 까다롭다
	// 문자열을 관리하는 함수들을 미리 정의해 놓았다
	// char str[5] = "abc";
	// str = "def";


	char  name1[10] = "김민준";
	char  name2[10] = "강소라";

	// 문자열 복사 
	// strcpy_s(저장할 공간의 주소, 복사할 문자열의 크기, 복사할 문자열의 주소);
	// strcpy(저장할 공간의 주소, 복사할 문자열의 주소);
	printf("%s\n", name1);
	strcpy_s(name1, sizeof("한효섭"), "한효섭");
	
	printf("%s\n", name1);

	printf("%s\n", name2);
	strcpy_s(name1, sizeof(name2), name2);    // -->  X
	strcpy_s(name1, strlen(name2) + 1, name2);   // -- O

	printf("%s\n", name1);

	// 문자열 길이
	// strlen(문자열 주소)
	// - NULL 문자를 제외한 순수한 문자열의 크기를 구한다


	// 문자열 비교 
	// strcmp(문자열주소1, 문자열주소2);
	// 문자열은 관계연산자로 비교하면 주소값을 비교하게 되어있다
	// 문자열 비교는 관계연산자 불가
	// 문자열 비교를 위한 함수
	// 같으면 0을 반환, 다르면 1을 반환
	// 같은 지를 판단할 때는 부정 연산자를 붙여서 판단한다
	if (!strcmp(name1, name2)) {
		printf("같다");
	}
	else {
		printf("다르다");
	}

	return 0;
}