#include <stdio.h>

int main(void) {

	int i = 0;
	
	/*while (i < 7) {
		printf("%d\n", i);
		i++;
	}*/

	while (1) {
		printf("%d\n", i);
		i++;
		if (i == 6) break;
	}
	return 0;
}