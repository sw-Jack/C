#include <stdio.h>

int main(void) {

	// scanf
	// - ǥ�� �Է� �Լ�
	// - Ű���带 ���� �����͸� �Է� �޴� ���

	// scanf_s - 2012 ���� �̻�
	// scanf_s("���Ĺ��ڿ�", &������);  -> ����, �Ǽ� �Է� ��
	// scanf_s("���Ĺ��ڿ�", &������, sizeof(������));  -> ������ ������(���ڿ� ����) �Է� ��
	// "���� ���ڿ�"
	// - �Է� ���� ������ �����ϴ� ���ڿ�
	// - ���ʿ��� ���� �Ǵ� ���ʿ��� ���ڰ� ������ �Է¹��� �� ������ ����
	// - �ݵ�� �Է¹��� ������ ���İ� ���� ������ ������ ��ġ�ǿ��� ��
	 //- short : %hd
	 //- int : %d
	 //- long : %ld
	 //- float : %f
	 //- double : %lf
	 //- char : %c
	 //- ���ڿ� : %s

	// & - �ּ� ������
	// - ��� ������ �ּҰ��� ���� 
	// 

	// scanf - 2010 ����


	// ���� �Է�
	/*int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	printf("num = %d\n", num);*/   // ��ü �ּ� ó�� : �巡�� + Ctrl + k + c, ���� : �巡�� + Ctrl + k + u


	// printf("num = %p\n", &num);    -> �ش� ���� �ּҰ� ��� "%p / &"


	// �Ǽ� �Է�(double)
	//double fs;
	//printf("���� �Է� : ");
	//scanf_s("%lf", &fs);
	//printf("fs = %.2lf\n", fs);

	// ���� �Է�
	//char ch;
	//printf("���� �Է� : ");
	//scanf_s("%c", &ch, sizeof(ch));



	// ���� ���� ������ �Է�
	int a;
	char b;
	double c;

	printf("���� ���� �Ǽ� �Է� : ");
	scanf_s("%d %c %lf", &a, &b, sizeof(b), &c);
	printf("%d\t%c\t%lf\n", a, b, c);

	return 0;












}