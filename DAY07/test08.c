#include <stdio.h>

int main(void) {

	char ch;

	printf("영문자 입력 : ");
	scanf_s("%c", &ch, 1);

	if (ch >= 65 && ch <= 90) {
		printf("%c는 대문자\n", ch);
		ch = ch + 32;
		printf("소문자로 변환 : %c\n", ch);
	}
	else if (ch >= 97 && ch <= 122) {     // else if(ch >= 'a' && ch <= 'z')
		printf("%c는 소문자\n", ch);
		ch = ch - 32;
		printf("대문자로 변환 : %c\n", ch);
	}
	else {
		printf("잘못된 입력\n");  // puts("잘못된 입력!!");  -> 문자열을 출력하는 표준 출력 함수 / 기본적으로 \n을 포함하고 있음
	}

	return 0;
}