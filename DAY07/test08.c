#include <stdio.h>

int main(void) {

	char ch;

	printf("������ �Է� : ");
	scanf_s("%c", &ch, 1);

	if (ch >= 65 && ch <= 90) {
		printf("%c�� �빮��\n", ch);
		ch = ch + 32;
		printf("�ҹ��ڷ� ��ȯ : %c\n", ch);
	}
	else if (ch >= 97 && ch <= 122) {     // else if(ch >= 'a' && ch <= 'z')
		printf("%c�� �ҹ���\n", ch);
		ch = ch - 32;
		printf("�빮�ڷ� ��ȯ : %c\n", ch);
	}
	else {
		printf("�߸��� �Է�\n");  // puts("�߸��� �Է�!!");  -> ���ڿ��� ����ϴ� ǥ�� ��� �Լ� / �⺻������ \n�� �����ϰ� ����
	}

	return 0;
}