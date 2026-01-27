#include <stdio.h>


int prime_check(int number);

int main(void) {
    int a; 
    a = prime_check(32767); 

    if (a == 1) {
        printf("소수입니다.");
        return 0;
    }
    if (a == 0) {
        printf("소수가 아닙니다.");
        return 0;
    }
    return 0;
}

int prime_check(int number) {
    int count = 0;
    int i = 0;

    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        return 1;
    }
    else {
        return 0;
    }
}