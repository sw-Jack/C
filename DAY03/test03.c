#include <stdio.h>

int main(void) {

	// %o - 8������ ����ϴ� ���� ����

	// %x - 16������ ����ϴ� ���� ����

	//			����		���� ����		ǥ������
	// 2����    0, 1		X				X
	// 8����	0~7			%o				010
	// 10����	0~9			%d				10	
	// 16����	0~9, A~F	%x				0x10	

	// �ԷµǴ� �������ٴ� ���� ������ ������ �켱�ȴ�.

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