#include <stdio.h>
#include <string.h>

typedef struct Info {

	// ����� ���� - �̸�, ����...
	char name[10];
	int age;
	// struct Info* in;
}IN;

int main(void) {

	IN in = { "�����", 20 };

	// ����ü ������
	// - ����ü ������ ����Ű�� ������ ����
	IN *pt = &in;

	// -> (���� ��� ���� ������)
	// - �ּҰ��� �ش��ϴ� ����ü �Ǵ� ����ü ������ ����� �����ϴ� ������

	

	printf("���� : %d\n", pt->age);
	printf("�̸� : %s\n", (*pt).name);

	return 0;
}