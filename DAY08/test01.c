#include <stdio.h>

int main(void) {

	int kor, eng, math;

	printf("국어 점수 입력 : ");
	scanf_s("%d", &kor);
	printf("영어 점수 입력 : ");
	scanf_s("%d", &eng);
	printf("수학 점수 입력 : ");
	scanf_s("%d", &math);

	double avg = (kor + eng + math) / 3.0;

	switch ((int) avg / 10) {
	case 10 :
		// printf("학점 : A\n합격!!!");
		// break;
	case 9 :
		printf("학점 : A\n합격!!!");
		break;
	case 8 :
		printf("학점 : B\n합격!!!");
		break;
	case 7 :
		printf("학점 : C\n합격!!!");
		break;
	case 6 :
		printf("학점 : D\n불합격!");
		break;
	default : 
		printf("학점 : F불합격!\n");
	}
	/*if (avg >= 90) {
		printf("학점 : A\n");
	}
	else if (avg >= 80) {
		printf("학점 : B\n");
	}
	else if (avg >= 70) {
		printf("학점 : C\n");
	}
	else if (avg >= 60) {
		printf("학점 : D\n");
	}
	else {
		printf("학점 : F\n");
	}

	if (avg >= 60) {
		printf("합격\n");
	}
	else {
		printf("불합격\n");
	}*/

	return 0;
}