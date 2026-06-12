#include <stdio.h>

int main() {
    int bread = 15;
    int people = 4;

    printf("%d개의 빵을 %d명의 사람이 공평하게 나누면 1인당 %d개씩 먹을 수 있고, %d개가 남슴다.\n", bread, people, bread/people, bread%people);

    return 0;
}
