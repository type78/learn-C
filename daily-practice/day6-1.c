#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    while (i <= 100) {
        sum += i; // sum = sum + i 와 동일
        i++;
    }

    printf("Sum of numbers from 1 to 100 : %d", sum);
    return 0;
}
