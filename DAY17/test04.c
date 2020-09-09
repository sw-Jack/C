#include <stdio.h>

int a = 0;
void recur();

int main(void) {

	recur();
	return 0;
}

void recur() {
	if (a >= 2) return;
	else a = a + 1;

	printf("營敝л熱 褒ч\n");
	recur();
	printf("營敝 л熱 部\n");
}