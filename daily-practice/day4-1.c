#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    printf("자연수를 하나 입력해 주십셔: ");
    
    // 정수 입력 받는다.
    scanf("%d", &num);

    // 조건에 따라 출력
    if (num == 7) {
        printf("행운의 숫자 %d 이군요! \n", num);
    } else if (num == 4) {
        printf("죽음의 숫자 %d 인가요;;;\n", num);
    } else {
        printf("그냥 평범한 숫자 %d 이구만요. \n", num);
    }
    return 0;
}
