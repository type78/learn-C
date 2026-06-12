#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num = 1;

while (num != 0) {

    printf("뭐 마실래? (1=콜라, 2=사이다, 3=환타) : ");
    if (scanf("%d", &num) != 1) {
        printf("입력오류, 종료!\n");
        return 0;
    }

    if (num == 0) {
        break;
    }

    // 입력받는 num값 따라 분기
    switch (num) {
        case 1:
            printf("%d을 눌렀으니 콜라!\n", num);
            break;
        case 2:
            printf("%d을 눌렀으니 사이다!\n", num);
            break;
        case 3:
            printf("%d을 눌렀으니 환타!\n", num);
            break;
        default:
            printf("%d는 없는 메뉴!\n", num);
            break;
    }
}
        printf("자판기 종료!\n");
        return 0;
}
