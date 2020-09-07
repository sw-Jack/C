#include <stdio.h>
#include <string.h>

int main(void) {

	// 쿵쿵따 게임
	// (규칙) - 한글 입력이라는 가정 하에
	// [1] 사용자에게 계속해서 단어를 입력받는다
	// [2] 입력된 단어가 3글자가 아니면 게임을 종료한다
	// [3] 이전 입력된 단어의 마지막 글자와
	// 지금 입력한 단어의 첫 글자가 같을 때만 진행, 아니면 종료한다
	// (예) 바나나 - 나비 (2글자라서 종료)
	// 고무공 - 공놀이 - 이니셜 - 설리반 (글자 안이어져서 종료)


	//char word1[10];
	//char word2[10];
	//while (1) {
	//	printf("단어 입력 : ");
	//	gets_s(word1, sizeof(word1));

	//	printf("단어 입력 : ");
	//	gets_s(word2, sizeof(word2));
	//	
	//	if (strlen(word1) != 3 || strlen(word2) != 3) {
	//		printf("게임종료\n"); break;
	//	}
	//	else if (word1[strlen(word1)-1] != word2[0]) {
	//		printf("게임종료\n"); break;
	//	}
	//}

	
	char prev[10] = { NULL };
	char next[10] = { NULL };


	while (1) {

		printf("단어 입력 : ");
		gets_s(next, sizeof(next));
		if (strlen(next) != 6) {
			printf("입력된 단어가 3글자가 아닙니다!\n");
			break;
		}
		if (prev[0] != '\0') {
			if (prev[4] != next[0] || prev[5] != next[1]) {
				printf("입력된 단어가 다릅니다!\n");
				break;
			}
		}

		strcpy_s(prev, strlen(next) + 1, next);

	}



	return 0;
}