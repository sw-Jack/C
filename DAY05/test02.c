#include <stdio.h>

int main(void) {

	int s1, s2;

	s1 = s2 = 5;

	printf("s1�� ���� 1 ���� = %d\n", s1 += 1);
	printf("s1�� ���� 1 ���� = %d\n", s1 -= 1);
	printf("s1 * s2 = %d\n", s1 *= s2);
	printf("s1 / s2 = %d\n", s1 /= s2);
	printf("s1 %% s2 = %d\n", s1 %= s2);

	return 0;
}