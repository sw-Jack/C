#include <stdio.h>

int main(void) {

	int kor, eng, math;

	printf("���� ���� �Է� : ");
	scanf_s("%d", &kor);
	printf("���� ���� �Է� : ");
	scanf_s("%d", &eng);
	printf("���� ���� �Է� : ");
	scanf_s("%d", &math);

	double avg = (kor + eng + math) / 3.0;

	switch ((int) avg / 10) {
	case 10 :
		// printf("���� : A\n�հ�!!!");
		// break;
	case 9 :
		printf("���� : A\n�հ�!!!");
		break;
	case 8 :
		printf("���� : B\n�հ�!!!");
		break;
	case 7 :
		printf("���� : C\n�հ�!!!");
		break;
	case 6 :
		printf("���� : D\n���հ�!");
		break;
	default : 
		printf("���� : F���հ�!\n");
	}
	/*if (avg >= 90) {
		printf("���� : A\n");
	}
	else if (avg >= 80) {
		printf("���� : B\n");
	}
	else if (avg >= 70) {
		printf("���� : C\n");
	}
	else if (avg >= 60) {
		printf("���� : D\n");
	}
	else {
		printf("���� : F\n");
	}

	if (avg >= 60) {
		printf("�հ�\n");
	}
	else {
		printf("���հ�\n");
	}*/

	return 0;
}