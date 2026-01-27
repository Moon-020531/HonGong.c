#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int age;
    char name[20] = { 0 }; 
    double height;
    char blood[3] = { 0 }; 

    printf("이름, 나이, 키, 혈액형:");


    scanf("%s %d %lf %s", name, &age, &height, blood);

    printf("10년후 프로필....\n");

    printf("이름: %s\n", name);
    printf("나이: %d\n", age + 10);
    printf("키: %.2lf\n", height - (0.5 * 10));
    printf("혈액형: %s\n", blood);

    return 0;
}