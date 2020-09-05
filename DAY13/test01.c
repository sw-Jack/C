#include <stdio.h>

int main(void) {

	// int 형 배열에 국어, 영어, 수학 점수를 입력 받아 각 과목의 점수의 합, 평균을 구하여 출력하는 프로그램을 만드시오
	char sub[3][5] = { "국어", "영어", "수학" };
	int arr[3] = { NULL };

	int tot = 0;

	for (int i = 0; i < 3; i++) {
		printf("%s 점수 입력 : ", sub[i]);
		scanf_s("%d", &arr[i]);
		tot += arr[i];
	}

	printf("총점 : %d\n", tot);
	printf("평균 : %.2f\n", tot / 3.0);

	return 0;
}