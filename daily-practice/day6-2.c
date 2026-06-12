#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    char ch;
    unsigned long long sum = 1;

    while (1) {
        printf("Enter a natural number between 1 and 20: ");
        if (scanf("%d%c", &n, &ch) != 2 || n <= 0 || n > 20 || ch != '\n') {
            printf("Invalid input!\n");
            break;
        }

        sum = 1;    
        for (int i = 1; i <= n; i++) {
        sum *= i; // sum = sum * i 와 동일
        }
        printf("%d! = %llu\n\n", n, sum);
    }
    return 0;
}