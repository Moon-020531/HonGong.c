#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	 
	char a[10] = { 0 };							// Be happy!는 공백을 포함하여 9글자이므로 10칸짜리 배열 필요

	printf("문자열 입력: ");					//gets()을 사용하여 문자열을 받음
	gets(a);

	printf("입력된 문자열:");					 //puts()을 사용하여 입력받은 문자열을 출력
	puts(a);



}