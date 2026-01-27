#define _CRT_SECURE_NO_WARNINGS
#include <ctype.h>
#include<stdio.h>
#include<string.h>
//void swap(int* pa, int* pb);
int main(void) {

	/*int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf_s("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	return 0;*/
	/*int score[5];
	int i;
	int total = 0;
	double avg;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균: %.1lf\n", avg);

	return 0;}*/
	/*int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i=0; i<count; i++)
	{
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count;

	for (i = 0; i < count; i++)
	{
		scanf_s("%5d", &score[i]);
	}
	printf("\n");

	printf("평균: %.1lf\n", avg);

	return 0;*/

	/*int a[5];
	double b[5];
	int c[] = { 1,2,3 };
	char d[4];
	int a[6] = { 1,2,3 };*/

	/*int A[3] = { 1,2,3 };
	int B[10];
	int i;


	for(i=0;i<3;i++)
	{
		B[i] = A[i];
		printf("%d", B[i]);
	}

	for (i = 0; i < 3; i++)
	{
		B[i + 4] = A[i];
		printf("%d", B[i]);
	}
	for (i = 0; i < 3; i++)
	{
		B[i + 7] = A[i];
		printf("%d", B[i]);
	}
	B[9] = A[0];
	printf("%d", B[9]);*/

	/*char str[80] = "applejam";

	printf("최초 문자열: %s\n", str);
	printf("문자열 입력:");
	scanf_s("%s", str);
	printf("입력후 문자열: %s\n", str);

	return 0;*/

	//char str1[80] = "cat";
	//char str2[80];
	//
	//strcpy(str1, "tiger");
	//strcpy(str1, str2);
	//printf("%s,%s\n", str1, str2);
	//
	//return 0;

	//char str[80];
	//
	//printf("문자열 입력:");
	//gets(str);
	//puts("입력된 문자열: ");
	//puts(str);
	//
	//return 0;

	//char str1[80], str2[80];
	//char temp[80];
	//
	//printf("두문자열 문자열 입력:");
	//scanf("%s %s", str1, str2);
	//printf("바꾸기 전: %s %s\n", str1, str2);
	//strcpy(temp, str1);
	//strcpy(str1, str2);
	//strcpy(str2, temp);
	//printf("바꾼 후: %s %s\n", str1, str2);


	/*char a[80];
	int i;
	int count = 0;

	printf("문장 입력:");
	scanf("%s", a);


	for (i = 0; a[i] != 0; i++) {
		if (isupper(a[i])) {
			a[i] = tolower(a[i]);
			count++;
		}
	}

printf("바꾼후 문자%s\n", a);
printf("바뀐 문자 수%d", count);

return 0;*/

//int a;
//int*pa;
//
//pa = &a;
//*pa = 10;
//printf("포인터로 a값 출력: %d\n", *pa);
//printf("변수명으로 a값 출력: %d\n", a);
//int a = 10, b = 15, total;
//double avg;
//int* pa, * pb;
//int* pt = &total;
//double* pg = &avg;
//
//pa = &a;
//pb = &b;
//
//*pt = *pa + *pb;
//*pg = *pt / 2.0;
//
//printf("두 정수의 값:%d,%d\n", *pa, *pb);
//printf("두 정수의 합:%d\n", *pt);
//printf("두 정수의 값:%.1lf\n",*pg);

//int a = 10, b = 20;
//const int* pa = &a;
//
//printf("변수 a 값: %d\n", *pa);
//pa = &b;
//printf("변수 b 값: %d\n", *pa);
//pa = &a;
//a = 20;
//printf("변수 a값: %d\n", *pa);
//
//return 0;

//char ch;
//int in;
//double db;
//char* p;
//int* p;
//double* p;
//
//p = &ch;
//p = &in;
//p = &db;


//int a = 10;
//int* p = &a;
//*p = 20;
//printf("%d", a);


//int a = 10;
//int* p = &a;
//double *pd;
//
//pd = p;
//printf("%lf\n", *pd);
//
//return 0;

//int a = 10, b = 20;
//
//swap(&a, &b);
//printf("a:%d,b:%d\n", a, b);
//
//return 0;
//}
//
//void swap(int* pa, int* pb) {
//	int temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;

//int a = 10, b = 20;
//int* pa = &a, * pb = &b, * pt;
//pt = pa;
//pa = pb;
//pb = pt;
//printf("%d,%d", *pa, *pb);
}
