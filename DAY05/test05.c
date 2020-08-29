#include <stdio.h>

int main(void) {

	printf("%d\n", 1 && 0);
	printf("%d\n", 1 && 2);
	printf("%d\n", 1 && -4);

	return 0;
}