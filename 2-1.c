#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a[5];
    int i;
    int b = 1000;
    int c = 0;
    int d = 0; 
    double e = 0; 

    printf("5명 심사위원의 점수 입력: ");


    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        d = a[i]+d;
       
        if (a[i] > c) {
            c = a[i];   //최고 점수
        }
        
        if (a[i] < b) {
            b = a[i];  // 최저 점수
        }
    }

    e = (double)(d - c - b) / 3;   // 최고점과 최저점 뺀 평균
   
    printf("유효 점수: ");
    int count = 0; 
    int max = 0; 
    int min = 0; 

    for (i = 0; i < 5; i++) {
       
        if (a[i] == c && max == 0) {
            max = 1;                      
            continue;
        }
        
        if (a[i] == b && min == 0) {
            min = 1;
            continue;
        }
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("평균: %.1lf\n", e);

    return 0;
}