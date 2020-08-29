#include <stdio.h>

int main(void) {

	int s1, s2, s3;

	s1 = 10;
	s2 = ++s1;  //s1 = 11, s2 = 11
	printf("s1 = %d, s2 = %d\n", s1, s2);
	
	s1 = 10; // s1 = 10
	s3 = s1++; // s3 = 10, s1 = 11
	printf("s1 = %d, s3 = %d\n", s1, s3);

	return 0;
}