#include<stdio.h>

//�μ��� ���Ͽ� ū�� ���ϱ� �Լ�
//��ȯ�ڷ���	int
//�Լ���		big
//�Ű�����		int a,int b

int big(int a, int b);

int main(void) {


	int a = 1;
	int b = 2;

	int bi = big(a, b);

	printf("%d�� %d �߿� ū�� : %d\n", a, b, bi);


	return 0;
	//return
	// - �Լ� ����
	// - while������ break�� ����ѿ���
	// - ��ȯ ���� �������� return �ڿ� �����־�� �Ѵ�...
	// - return�� ���� ȣ���ߴ� �������� ��ȯ���� �����ش�...

}

int big(int a, int b) {
	if (a > b) {
		return a;
	}
	else if (b > a) {
		return b;
	}
	else {
		return 0;
	}
}