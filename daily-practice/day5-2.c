#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char grade; 

    printf("성적 등급 입력 (A~C) :");
    scanf(" %c", &grade);

    // 입력받는 num값 따라 분기
    switch (grade) {
        case 'a':
        case 'A':
            printf("최우수 학생입니다!\n");
            break;
        case 'b':
        case 'B':
            printf("우수 학생입니다!\n");
            break;
        case 'c':
        case 'C':
            printf("조금 더 노력하세요!\n");
            break;
        default:
            printf("그런 성적은 없습니다.\n");
            break; 
    }
        return 0;
}
