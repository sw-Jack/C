// [������ ��ȭ �ùķ��̼�]
// 1. �������� 1�� ��ȭ�ϴµ� ���� 1000���� �ʿ��ϴ�
// 2. �������� ó���� ������ 0�̴�
// 3. ��ȭ�� ������ Ȯ���� 35%�̰� �����ϸ� ������ 1����     -> ���� �� 1 ~ 100�� �߿��� 1~ 35 �� ��µǴ� ���
// 4. ��ȭ�� ������ Ȯ���� 30%�̰� �����ϸ� ������ 1����
// 5. �� ���� ��쿡�� �ƹ��� ��ȭ�� ����.

// 0������ �������� 10������ ����� ���� ���� ��� �ξ�� �Ǵ� ������ ����ϼ���
// level, totmoney, money
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int level = 0;
	int totmoney = 0;
	int cnt = 0;
	srand((unsigned)time(NULL));
	
	printf("<������ ��ȭ �ùķ��̼�>\n\n");

	while (1) {
		printf("<��ȭ����>\n-1000��\n��ȭ �õ� ��...\n\n");
		int per = rand() % 100 + 1;
		totmoney += 1000;
		if (per >= 1 && per <= 35) {
			printf("��ȭ ����!!!\n\n");
			cnt++;
			level++;
		}
		else if (per >= 71 && per <= 100) {
			printf("��ȭ ����!!!\n\n");
			cnt++;
			level--;
		}

		if (level == 10) break;

	}

	printf("�Ѱ�ȭ Ƚ�� : %d\n0�������� 10�������� ��� ���� ���� �Ѿ� : %d\n", cnt, totmoney);
	return 0;
}



















