#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 사용자가 틀릴 때까지 구구단 문제를 출제하는 프로그램 구현
// ( 2 X 1 부터 19 X 9 까지 구현)

// 사용자가 3문제를 틀리면 게임오버! 라는 메세지를 출력한 뒤 종료
// 종료 전에 정답 개수와 점수를 출력

// [1] 일반 정답 + 10점
// [2] 어려운 문제 정답은 5점 추가(총 15점) 11단 부터~

int main(void) {
	
	int answer;
	int correct = 0;
	int cnt = 0;
	int score = 0;

	srand((unsigned)time(NULL));

	printf("<구구단 게임 시작>\n\n");
	while(1) {
		
		int dan1 = rand() % 18 + 2;
		int dan2 = rand() % 9 + 1;
		printf("%d X %d ? ", dan1, dan2);
		scanf_s("%d", &answer);

		if (answer == (dan1 * dan2)) {
			correct++;
			printf("정답입니다!\n\n");
			if (dan1 >= 2 && dan1 < 11) {
				score += 10;
			}
			else {
				score += 15;
			}
		}
		else {
			cnt++;
			printf("틀렸습니다!\n\n");
			if (cnt == 3) {
				printf("게임오버!\n");
				printf("정답 개수 : %d, 점수 : %d\n", correct, score);
				break;
			}
		}
	}
	printf("게임종료...\n");
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
			printf("일반 정답 +10점\n");
			if (a > 11) {
				tot += 15;
				printf("어려운 문제 정답 +15점\n");
			}
		}
		else {
			if (over == 0) {
				printf("게임오버!!!\n");
				printf("총 정답 개수 : %d\t총점 : %d\n", cnt, tot);
				break;
			}
			printf("오답!!!\n%d번 남았습니다\n", over);
			over--;
		}
	}
	return 0;*/
}