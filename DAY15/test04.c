#include <stdio.h>
#include <string.h>

int main(void) {

	// ������ ����
	// (��Ģ) - �ѱ� �Է��̶�� ���� �Ͽ�
	// [1] ����ڿ��� ����ؼ� �ܾ �Է¹޴´�
	// [2] �Էµ� �ܾ 3���ڰ� �ƴϸ� ������ �����Ѵ�
	// [3] ���� �Էµ� �ܾ��� ������ ���ڿ�
	// ���� �Է��� �ܾ��� ù ���ڰ� ���� ���� ����, �ƴϸ� �����Ѵ�
	// (��) �ٳ��� - ���� (2���ڶ� ����)
	// ���� - ������ - �̴ϼ� - ������ (���� ���̾����� ����)


	//char word1[10];
	//char word2[10];
	//while (1) {
	//	printf("�ܾ� �Է� : ");
	//	gets_s(word1, sizeof(word1));

	//	printf("�ܾ� �Է� : ");
	//	gets_s(word2, sizeof(word2));
	//	
	//	if (strlen(word1) != 3 || strlen(word2) != 3) {
	//		printf("��������\n"); break;
	//	}
	//	else if (word1[strlen(word1)-1] != word2[0]) {
	//		printf("��������\n"); break;
	//	}
	//}

	
	char prev[10] = { NULL };
	char next[10] = { NULL };


	while (1) {

		printf("�ܾ� �Է� : ");
		gets_s(next, sizeof(next));
		if (strlen(next) != 6) {
			printf("�Էµ� �ܾ 3���ڰ� �ƴմϴ�!\n");
			break;
		}
		if (prev[0] != '\0') {
			if (prev[4] != next[0] || prev[5] != next[1]) {
				printf("�Էµ� �ܾ �ٸ��ϴ�!\n");
				break;
			}
		}

		strcpy_s(prev, strlen(next) + 1, next);

	}



	return 0;
}