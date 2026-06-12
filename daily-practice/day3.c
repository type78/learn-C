#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    printf("숫자를 입력하세요: ");
    //사용자가 입력한 정수(%d)를 변수 num에 저장
    scanf("%d", &num);

    // 만약 num이 7과 '같다면' 중괄호 안의 내용을 실행
    if (num == 7) {
        printf("당신은 행운의 숫자 7을 입력했습니다! \n");
    }

    return 0;
}
