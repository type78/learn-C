#include <stdio.h>

int main() {
    int a; // 정수를 저장할 변수 a를 만듭니다.
    a = 10;

    // 변수를 선언하면서 동시에 값을 넣을 수도 있슴다.
    double b = 3.141592;

    // %d는 정수(int), %f는 실수(double)를 출력하는 포맷 지정자임다.

    printf("a의 값은 %d 임다. \n", a);
    printf("b의 값은 %f 임다. \n", b);

    return 0;
}
