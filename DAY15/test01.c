#include <stdio.h>

int main(void) {

	// ���ڿ�
	// - ��� ���α׷��� ������ ������ ���ڿ��̶� �θ���
	// - ���ڿ��� ����� ���� ""�ȿ� ����� �Ѵ�
	// - ���ڿ��� ����ϴ� ���Ĺ��ڴ� %s�̴�
	// - c������ ���ڿ��� ����ϴ� �ڷ����� �������� �ʴ´�
	// - ���ڿ��� �����ϰ� �����ϱ� ���ؼ� char�� �迭�� ����Ѵ�
	// - �ƽ�Ű �ڵ� ������ ���ڵ��� 1byte
	// - �ƽ�Ű �ڵ� �ܺ��� ���ڵ��� 2byte
	// - ���ڿ��� ���� NULL����(\0)�� �ڵ����� �����Ͽ� ���� ǥ���Ѵ�
	
	//- ex) This ������ī Rula  --> ������ 8�� : 8 byte, �ѱ� 4�� : 8 byte, ���� 2�� : 2 byte, NULL���� : 1byte ==> 19 byte

	char str[19] = "This ������ī Rula!";
	printf("%s\n", str);

	// %s - ���� �ּҷκ��� NULL ���ڱ����� �����͸� �о���� ���� ����

	// - ��� ���ڿ� �����ʹ� �ּҰ����� ���� �ȴ�
	// ��� ������ ������ ���� �ּҰ��� ������ �ִ�

	// �迭���� �迭�� ���� �ּҰ��� ������ �������� ����̴�
	printf("%p\n", str);
	printf("%p\n", &str);

	return 0;
}