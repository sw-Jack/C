#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	// rand() % 범위의 숫자 개수 + 시작수

	// 업다운 게임을 구현하려한다.
	// 컴퓨터에게 1부터 100 사이의 정답을 생성하도록 코드를 구현한 뒤
	// 사용자가 숫자를 입력하여 정답을 맞추도록 프로그래밍하라

	// <게임의 상태>
	// [업] 사용자가 정답보다 낮은 값을 입력한 겨우
	// [다운] 사용자가 정답보다 높은 값을 입력한 경우
	// [정답] 사용자가 정답과 같은 값을 입력한 경우, 게임 종료
	// 게임 종료 시 총 입력한 횟수를 화면에 출력
	srand((unsigned)time(NULL));
	int randnum = rand() % 100 + 1;
	int usernum, cnt = 0;
	printf("<업다운 게임 시작>\n랜덤 넘버 생성\n");
	//printf("%d\n", randnum);
	while (1) {
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &usernum);
		cnt++;
		if(usernum == randnum) {
			printf("[정답] 게임을 종료합니다.\n");
			break;
		}
		else if (usernum > randnum) {
			printf("[다운] 더 낮은 수를 입력하세요!\n");
		}
		else {
			printf("[업] 더 높은 수를 입력하세요!\n");
		}
	}

	printf("<게임 종료>\n정답 랜덤 넘버 : %d\n총 시도 횟수 : %d\n", randnum, cnt);

	return 0;
}

