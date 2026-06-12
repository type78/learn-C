#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main () {
    int math_test_score;
    
    printf("당신 수학 점수 입력: ");
    scanf("%d", &math_test_score);

    if (math_test_score >= 90) {
        printf("당신 합격!\n");
    }

    return 0;
}
