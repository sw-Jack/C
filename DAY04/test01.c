#include <stdio.h>

int main(void) {

	// ���̸� �����ϴ� ���� ����
	int age;

	// Ű�� �����ϴ� ���� ����
	float height;
	double hei;
	
	// sizeof()
	// - ������ ũ�⸦ �˷��ִ� ������
	// - byte ������ �˷��ش�
	// - ��ȣ �ȿ� �ڷ���, ������, ������, �����...
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("age�� ũ�� : %d\n", sizeof(age));

	printf("float�� ũ�� : %d\n", sizeof(float));
	printf("height�� ũ�� : %d\n", sizeof(height));



	return 0;
}