#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ����ڰ� Ʋ�� ������ ������ ������ �����ϴ� ���α׷� ����
// ( 2 X 1 ���� 19 X 9 ���� ����)

// ����ڰ� 3������ Ʋ���� ���ӿ���! ��� �޼����� ����� �� ����
// ���� ���� ���� ������ ������ ���

// [1] �Ϲ� ���� + 10��
// [2] ����� ���� ������ 5�� �߰�(�� 15��) 11�� ����~

int main(void) {
	
	int answer;
	int correct = 0;
	int cnt = 0;
	int score = 0;

	srand((unsigned)time(NULL));

	printf("<������ ���� ����>\n\n");
	while(1) {
		
		int dan1 = rand() % 18 + 2;
		int dan2 = rand() % 9 + 1;
		printf("%d X %d ? ", dan1, dan2);
		scanf_s("%d", &answer);

		if (answer == (dan1 * dan2)) {
			correct++;
			printf("�����Դϴ�!\n\n");
			if (dan1 >= 2 && dan1 < 11) {
				score += 10;
			}
			else {
				score += 15;
			}
		}
		else {
			cnt++;
			printf("Ʋ�Ƚ��ϴ�!\n\n");
			if (cnt == 3) {
				printf("���ӿ���!\n");
				printf("���� ���� : %d, ���� : %d\n", correct, score);
				break;
			}
		}
	}
	printf("��������...\n");
	return 0;

	/*int over = 2;
	int cnt = 0;
	int tot = 0;

	srand((unsigned)time(NULL));
	

	while (1) {
		int a = rand() % 18 + 2;
		int b = rand() % 9 + 1;
		int com = a * b;

		int user;
		printf("%d X %d = ", a, b);
		scanf_s("%d", &user);

		if (com == user) {
			tot += 10;
			cnt++;
			printf("�Ϲ� ���� +10��\n");
			if (a > 11) {
				tot += 15;
				printf("����� ���� ���� +15��\n");
			}
		}
		else {
			if (over == 0) {
				printf("���ӿ���!!!\n");
				printf("�� ���� ���� : %d\t���� : %d\n", cnt, tot);
				break;
			}
			printf("����!!!\n%d�� ���ҽ��ϴ�\n", over);
			over--;
		}
	}
	return 0;*/
}