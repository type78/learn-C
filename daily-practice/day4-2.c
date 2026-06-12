#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

start:
    
    printf("뭐 마실래? (1=콜라, 2=사이다, 3=환타) : ");
    
    // 정수 입력 받는다.
    scanf("%d", &num);

    // 조건에 따라 출력
    if (num == 1) {
        printf("%d을 눌렀으니 콜라!\n", num);
    } else if (num == 2) {
        printf("%d을 눌렀으니 사이다!\n", num);
    } else if (num == 3) {
        printf("%d을 눌렀으니 환타!\n", num);
    } else {
        printf("%d는 없는 메뉴임.\n", num);goto start;
    }
    return 0;
}
