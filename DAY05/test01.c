#include <stdio.h>

int main(void) {
		
	int s1, s2;
	s1 = 20;
	s2 = 3;

	printf("%d + %d = %d\n", s1, s2, s1 + s2);
	printf("%d - %d = %d\n", s1, s2, s1 - s2);
	printf("%d * %d = %d\n", s1, s2, s1 * s2);
	printf("%d / %d = %d\n", s1, s2, s1 / s2);
	printf("%d %% %d = %d\n", s1, s2, s1 % s2);

	return 0;
}