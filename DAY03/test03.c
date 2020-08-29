#include <stdio.h>

int main(void) {

	// %o - 8진수를 담당하는 서식 문자

	// %x - 16진수를 담당하는 서식 문자

	//			범위		서식 문자		표기형식
	// 2진수    0, 1		X				X
	// 8진수	0~7			%o				010
	// 10진수	0~9			%d				10	
	// 16진수	0~9, A~F	%x				0x10	

	// 입력되는 진법보다는 서식 문자의 형식이 우선된다.

	printf("Decimal : %d\n", 173);
	printf("Decimal : %d\n", 0255);
	printf("Decimal : %d\n", 0xAD);

	printf("Octal : %o\n", 173);
	printf("Octal : %o\n", 0255);
	printf("Octal : %o\n", 0xAD);

	printf("Hexadecimal : %x\n", 173);
	printf("Hexadecimal : %x\n", 0255);
	printf("Hexadecimal : %x\n", 0xAD);

	return 0;
}