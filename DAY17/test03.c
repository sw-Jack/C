#include <stdio.h>
#include  <stdlib.h>
//int input() { 
//	int num;
//	printf("�� �Է�(0 ����) : ");
//	scanf_s("%d", &num);
//	return num;
//}
//
//void evenodd() {
//	while (1) {
//		int num = input();
//		if (num == 0) {
//			printf("-> Bye~*\n\n");
//			break;
//		}
//		else if (num % 2 == 0) {
//			printf("-> %d�� ¦���Դϴ�.\n\n", num);
//		}
//		else {
//			printf("-> %d�� Ȧ���Դϴ�.\n\n", num);
//		}
//	}
//}
//
//int main(void) {
//	evenodd();
//}


int input() { 
	int num;
	printf("�� �Է�(0 ����) : ");
	scanf_s("%d", &num);
	return num;
}

void evenodd(int num) { 

		if (num == 0) {
			printf("-> Bye~*\n\n");
			exit(0); // ���α׷� ���� �Լ� 
			// 0 : ���� ����, 0�� �ƴ� �� : ���� ����
		}
		else if (num % 2 == 0) {
			printf("-> %d�� ¦���Դϴ�.\n\n", num);
		}
		else {
			printf("-> %d�� Ȧ���Դϴ�.\n\n", num);
		}
}

void startup() {
	while (1) {
		int num = input();
		evenodd(num);

		// �ý��� �Լ� ���
		system("pause");
		system("cls");
	}
}
int main(void) { 
	startup();
	return 0;
}