#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float ave_score, math, english, science, programming;

    printf("수학, 영어, 과학, 프로그래밍 과목 점수를 각각 입력해 주세요 : ");
    
    // 4개 실수를 한 번에 입력받습니다. 띄어쓰기나 엔터로 구분해서 입력
    scanf("%f %f %f %f", &math, &english, &science, &programming);

    // 4과목 평균 구하기
    ave_score = (math + english + science + programming) / 4;

    printf("당신의 평균 점수는 %f 입니다.\n", ave_score);

    // 평균 점수에 따라 등급 나누기
    if (ave_score >= 90) {
        printf("당신은 우등생 입니다. \n");
    } else if (ave_score >= 50) {
        printf("조금 더 노력하세요! \n");
    } else if (ave_score > 0) {
        printf("엄청난 노력이 필요합니다! \n");
    } else {
        printf("기적이 필요합니다. \n");
    }
    return 0;
}
