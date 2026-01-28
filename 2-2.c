#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;
	int a[6] = { 0 };
	int result;

	for (i = 0; i < 6; i++)
	{
		printf("로또 번호 입력: ");
		result = scanf("%d", &a[i]);

	
			if (a[i] == a[i - 1]) {

				printf("중복된 숫자입니다");
				printf("\n");
				i--;
				continue;


			}
			else if (a[i] == a[i - 2]) {

				printf("중복된 숫자입니다");
				printf("\n");
				i--;
				continue;


			}
			else if (a[i] == a[i - 3]) {

				printf("중복된 숫자입니다");
				printf("\n");
				i--;
				continue;


			}
			else if (a[i] == a[i - 4]) {

				printf("중복된 숫자입니다");
				printf("\n");
				i--;
				continue;

			}
			else if (a[i] == a[i - 5]) {

				printf("중복된 숫자입니다");
				printf("\n");
				i--;
				continue;


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