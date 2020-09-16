#include<stdio.h>

typedef struct Info {
	char name[10];//이름
	int age;//나이
}IN;


int main(void) {

	IN arr[2] = { {"김민준"},{"음문석",39} };

	IN* pt = arr;


	// (* ).  ==   ->

	for (int i = 0; i < 2; i++) {
		printf("이름 : %s\n", pt[i].name);
		printf("이름 : %s\n", (*(pt + 1)).name);
		printf("나이 : %d\n", pt[i].age);
		printf("나이 : %d\n", (pt + i)->age);
	}








	return 0;
}