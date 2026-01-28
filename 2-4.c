#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rotate(int* pa, int* pb, int* pc);

int main(void){
	int a, b, c;
	char d;
	int result;
	printf("세 정수 입력: ");
	scanf("%d %d %d", &a, &b, &c);

	for (int i = 0; i < 200; i++) {
		scanf("%c", &d);
		if (d == '\n') {
			rotate(&a, &b, &c);
			printf("%d %d %d", a, b, c);
			continue;
		}
		else
			break;
	}

}

void rotate(int* pa, int* pb, int* pc) {
	int temp;
	temp = *pc;
	*pc = *pb;
	*pb = *pa;
	*pa = temp;

}
