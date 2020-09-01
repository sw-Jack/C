// [아이템 강화 시뮬레이션]
// 1. 아이템은 1번 강화하는데 현금 1000원이 필요하다
// 2. 아이템은 처음에 레벨이 0이다
// 3. 강화가 성공할 확률은 35%이고 성공하면 레벨이 1증가     -> 랜덤 값 1 ~ 100개 중에서 1~ 35 가 출력되는 경우
// 4. 강화가 실패할 확률은 30%이고 실패하면 레벨이 1감소
// 5. 그 외의 경우에는 아무런 변화가 없다.

// 0레벨의 아이템을 10레벨로 만들기 위해 내가 쏟아 부어야 되는 현금을 계산하세요
// level, totmoney, money
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int level = 0;
	int totmoney = 0;
	int cnt = 0;
	srand((unsigned)time(NULL));
	
	printf("<아이템 강화 시뮬레이션>\n\n");

	while (1) {
		printf("<강화시작>\n-1000원\n강화 시도 중...\n\n");
		int per = rand() % 100 + 1;
		totmoney += 1000;
		if (per >= 1 && per <= 35) {
			printf("강화 성공!!!\n\n");
			cnt++;
			level++;
		}
		else if (per >= 71 && per <= 100) {
			printf("강화 실패!!!\n\n");
			cnt++;
			level--;
		}

		if (level == 10) break;

	}

	printf("총강화 횟수 : %d\n0레벨에서 10레벨까지 쏟아 부은 현금 총액 : %d\n", cnt, totmoney);
	return 0;
}



















