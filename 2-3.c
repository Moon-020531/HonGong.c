#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int *mod ,int *rem);

int main(void) {

	int mod, rem;
	func(&mod, &rem);
	printf("몫: %d, 나머지: %d\n", mod, rem);

	return 0;

}

int func(int* mod, int* rem) {
	int b=0;
	printf("양수 입력: ");
	scanf("%d",&b);
	*mod = b / 4;
	*rem = b % 4;
	return 0;

}



