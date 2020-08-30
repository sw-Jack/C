#include <stdio.h>

int main(void) {

	int s1, s2, s3;
	
	printf("점수 세개 입력 : ");
	scanf_s("%d %d %d", &s1, &s2, &s3);
	
	/*double avg = (s1 + s2 + s3) / 3.0;

	if (avg >= 60 && s1 >= 40 && s2 >= 40 && s3 >= 40) {
		printf("합격\n");
	}
	else {
		printf("불합격\n");
		if (avg < 60) {
			printf("평균\n");
		}
	}*/

	/*if (s1 >= 40 && s2 >= 40 && s3 >= 40) {
		if ((s1 + s2 + s3) / 3 >= 60) {
			printf("합격\n");
		}
	}
	else {
		printf("불합격\n");
	}*/

	

	return 0;
}