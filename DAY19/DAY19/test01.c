#include <stdio.h>

void toUpper(char* str) {
	int i = 0;
	while (str[i] != '\n') {
		if (str[i] >= 'a' && str[i] <= 122) {
			str[i] -= 32;
		}
		i++;
	}
}

int main(void) {


	char str[512];

	printf("���ڿ� �Է� : ");
	gets_s(str, 512);

	toUpper(str);

	printf("����� %s�Դϴ�.\n", str);



	return 0;
}