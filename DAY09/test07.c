#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	// rand() % ������ ���� ���� + ���ۼ�

	// ���ٿ� ������ �����Ϸ��Ѵ�.
	// ��ǻ�Ϳ��� 1���� 100 ������ ������ �����ϵ��� �ڵ带 ������ ��
	// ����ڰ� ���ڸ� �Է��Ͽ� ������ ���ߵ��� ���α׷����϶�

	// <������ ����>
	// [��] ����ڰ� ���亸�� ���� ���� �Է��� �ܿ�
	// [�ٿ�] ����ڰ� ���亸�� ���� ���� �Է��� ���
	// [����] ����ڰ� ����� ���� ���� �Է��� ���, ���� ����
	// ���� ���� �� �� �Է��� Ƚ���� ȭ�鿡 ���
	srand((unsigned)time(NULL));
	int randnum = rand() % 100 + 1;
	int usernum, cnt = 0;
	printf("<���ٿ� ���� ����>\n���� �ѹ� ����\n");
	//printf("%d\n", randnum);
	while (1) {
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &usernum);
		cnt++;
		if(usernum == randnum) {
			printf("[����] ������ �����մϴ�.\n");
			break;
		}
		else if (usernum > randnum) {
			printf("[�ٿ�] �� ���� ���� �Է��ϼ���!\n");
		}
		else {
			printf("[��] �� ���� ���� �Է��ϼ���!\n");
		}
	}

	printf("<���� ����>\n���� ���� �ѹ� : %d\n�� �õ� Ƚ�� : %d\n", randnum, cnt);

	return 0;
}

