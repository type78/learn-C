#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 1000; i++) {
        if(i%3 == 0 || i%5 == 0) {
        sum += i; // sum = sum + i 와 동일
        }
    }

    printf("Sum of multiples of 3 or 5 from 1 to 1000 : %d\n", sum);
    return 0;
}