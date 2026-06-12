#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main () {
    int num = 1;
    
    while (num != 0) {

        printf("아무 자연수 입력: ");
        scanf("%d", &num);

        if (num%2 == 0) {
            printf("%d는 짝수!\n\n", num);
        }

        if (num%2 == 1) {
            printf("%d는 홀수!\n\n", num);
        }

    }

    return 0;
}
