#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;
	int a[6] = { 0 };
	int result;
	int z;
	

	for (i = 0; i < 6; i++)
	{
		printf("로또 번호 입력: ");
		result = scanf("%d", &a[i]);
			for (z = 0; z < i; z++) {
				if (a[i] == a[z]) {
					printf("중복된 숫자입니다");
					printf("\n");
					i--;
					break;
				}
			}

	}
	
	printf("입력된 번호:");
	for (i = 0; i < 6; i++)
	{
		printf(" %d", a[i]);
	}
	printf("\n");

	return 0;
}