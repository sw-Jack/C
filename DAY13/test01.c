#include <stdio.h>

int main(void) {

	// int �� �迭�� ����, ����, ���� ������ �Է� �޾� �� ������ ������ ��, ����� ���Ͽ� ����ϴ� ���α׷��� ����ÿ�
	char sub[3][5] = { "����", "����", "����" };
	int arr[3] = { NULL };

	int tot = 0;

	for (int i = 0; i < 3; i++) {
		printf("%s ���� �Է� : ", sub[i]);
		scanf_s("%d", &arr[i]);
		tot += arr[i];
	}

	printf("���� : %d\n", tot);
	printf("��� : %.2f\n", tot / 3.0);

	return 0;
}