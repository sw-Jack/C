#include <stdio.h>

void inputNum(int* n) {
	for (int i = 0; i < 5; i++) {
		printf("%d��° ���� �Է� : ", i+1);
		scanf_s("%d", n + i);
	}
}

void outputNum(int* n) {
	puts("*** ��� ***");
	for (int i = 0; i < 5; i++) {
		printf("%-3d", n[i]);
	}
	puts("");
}
int main(void) {

	int n[5];

	inputNum(n);
	outputNum(n);
	return 0;
}