#include <stdio.h>

int main(void) {

	double dnum;
	char a, b, c;
	int eng, kor, math;
	int age;
	double height, weight;

	printf("실수 입력 : ");
	scanf_s("%lf", &dnum);
	printf("입력한 실수 = %lf\n\n", dnum);

	getchar();
	printf("자신의 이니셜 입력 :  ");
	scanf_s("%c %c %c", &a, 1, &b, 1, &c, 1);
	printf("입력한 이니셜 = %c%c%c\n\n", a, b, c);

	printf("국영수 세과목 점수 입력 : ");
	scanf_s("%d %d %d", &eng, &kor, &math);
	printf("세과목 합계 : %d\n세과목 평균 : %d\n\n", eng + kor + math, (eng + kor + math) / 3);

	printf("나이 입력 : ");
	scanf_s("%d", &age);

	printf("키 입력 : ");
	scanf_s("%lf", &height);

	printf("몸무게 입력 : ");
	scanf_s("%lf", &weight);
	printf("나이 : %d\n키 : %lf\n몸무게 : %lf\n", age, height, weight);
	return 0;
}