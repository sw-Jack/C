#include <stdio.h>

// ���丮�� �Լ�(���ȣ��/�Լ�)
int fact(int num) {

	if (num <= 1) return num;
	else return (num * fact(num - 1));
}

int main(void) {

	int num;
	
	printf("�� �Է� : ");
	scanf_s("%d", &num);

	int factnum = fact(num);

	printf("%d! = %d\n", num, factnum);

	return 0;
}

// �Ǻ���ġ ���� �Լ�(���ȣ��/�Լ�)
//#include <stdio.h>
//int fibo(int num) {
//
//	if (num <= 1) return num;
//	else return (fibo(num-1) + fibo(num-2));
//}
//
//int main(void) {
//
//	int num;
//
//	printf("�� �Է� : ");
//	scanf_s("%d", &num);
//
//	int factnum = fibo(num);
//
//	printf("%d��° �Ǻ���ġ ���� = %d\n", num, factnum);
//
//	return 0;
//}

