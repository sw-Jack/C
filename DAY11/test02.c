#include <stdio.h>

int main(void) {

	// ���� �����Ϸ� �Ѵ�
	// ���� ������ ���� ���� ������ ���� 2��� �� �����̰� 
	// ù°���� 1���� �����Ϸ��� �Ѵ�

	// (Q1) 30�� ���� ���忡 ����� ���� ���ΰ�?
	// v1
	//int  sum = 0; 
	//int dep = 1;
	//for (int i = 1; i <= 30; i++) {
	//	sum += dep;
	//	dep *= 2;
	//}

	// (Q1) 30�� ���� ���忡 ����� ���� ���ΰ�?
	// v2
	int  sum = 0; 
	int dep = 1;
	for (int i = 1; i <= 30; i++) { // for (int i = 1; i <= 30; dep *= 2, i++)
		sum += dep;
		printf("%d. ���� �ݾ� : %d, �� ���� �ݾ�: %d��\n", i, dep, sum);
		dep *= 2;
	}

	printf("30�� ���� ����� �� : %d��\n", sum);
	return 0;
}