#include <stdio.h>
#include  <stdlib.h>
//int input() { 
//	int num;
//	printf("수 입력(0 종료) : ");
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
//			printf("-> %d는 짝수입니다.\n\n", num);
//		}
//		else {
//			printf("-> %d는 홀수입니다.\n\n", num);
//		}
//	}
//}
//
//int main(void) {
//	evenodd();
//}


int input() { 
	int num;
	printf("수 입력(0 종료) : ");
	scanf_s("%d", &num);
	return num;
}

void evenodd(int num) { 

		if (num == 0) {
			printf("-> Bye~*\n\n");
			exit(0); // 프로그램 종료 함수 
			// 0 : 정상 종료, 0이 아닌 수 : 에러 종료
		}
		else if (num % 2 == 0) {
			printf("-> %d는 짝수입니다.\n\n", num);
		}
		else {
			printf("-> %d는 홀수입니다.\n\n", num);
		}
}

void startup() {
	while (1) {
		int num = input();
		evenodd(num);

		// 시스템 함수 사용
		system("pause");
		system("cls");
	}
}
int main(void) { 
	startup();
	return 0;
}