# include <stdio.h>

int main(void) {

	int n1, n2, menu;
	// char op;

	printf("두개의 정수 입력 : ");
	scanf_s("%d %d", &n1, &n2);

	printf("## 계산기 ##\n1. 더하기\n2. 빼기\n3. 나누기\n4. 곱하기\n");
	printf("연산 번호 입력 : ");
	scanf_s("%d", &menu);

	// printf("연산 입력 : ");
	// scanf_s("%c", &op, 1);

	switch (menu) {
	case 1 :
		printf("%d + %d = %d\n", n1, n2, n1 + n2);
		break;
	case 2:
		printf("%d - %d = %d\n", n1, n2, n1 - n2);
		break;
	case 3:
		printf("%d / %d = %.2f\n", n1, n2, n1 / (double)n2);
		break;
	case 4:
		printf("%d * %d = %d\n", n1, n2, n1 * n2);
		break;
	default :
		printf("잘못된 입력입니다!\n");
	}

	/*switch (op) {
	case '+' :
		printf("%d + %d = %d\n", n1, n2, n1 + n2);
		break;
	case '-' :
		printf("%d - %d = %d\n", n1, n2, n1 - n2);
		break;
	case '/' :
		printf("%d / %d = %.2f\n", n1, n2, n1 / (double)n2);
		break;
	case '*' :
		printf("%d * %d = %d\n", n1, n2, n1 * n2);
		break;
	default:
		printf("잘못된 입력입니다!\n");
	}*/

	return 0;
}