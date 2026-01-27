#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
	int total = 0;
	while (1) {
		int a = 0;
		printf("양수입력: ");
		scanf("%d", &a);
		if (a <= 0) {
			break;
		}
		else
		{
			total = total + a;
		}
	}
	printf("누적된 값: %d", total);
}