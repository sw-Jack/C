# include <stdio.h>

int main(void) {

	int n1, n2, menu;
	// char op;

	printf("�ΰ��� ���� �Է� : ");
	scanf_s("%d %d", &n1, &n2);

	printf("## ���� ##\n1. ���ϱ�\n2. ����\n3. ������\n4. ���ϱ�\n");
	printf("���� ��ȣ �Է� : ");
	scanf_s("%d", &menu);

	// printf("���� �Է� : ");
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
		printf("�߸��� �Է��Դϴ�!\n");
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
		printf("�߸��� �Է��Դϴ�!\n");
	}*/

	return 0;
}