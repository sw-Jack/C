#include <stdio.h>
#include <string.h>

typedef struct Info {

	char name[10];
	int age;
} in;

int main(void) {

	// ����ü �迭
	// -  ����ü ������ ���� �迭
	// - �迭�� ��Ұ� ����ü ������ �迭

	// �迭 ����
	// - �ڷ��� �迭��[����];

	in arr[2] = { {"�����",20},{"������",30} };  // �߰�ȣ ���� ����

	// ����ü �迭 ȣ��
	// �迭��[�ε���].����ʵ��

	for (int i = 0; i < 2; i++) {
		printf("�̸� : %s\n", arr[i].name);
		printf("���� : %d\n", arr[i].age);
	}





	return 0;
}