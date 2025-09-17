#include <stdio.h>

// 두 정수 중 큰 값을 반환하는 함수
int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main(void) {
    int x, y;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &x, &y);

    printf("큰 값은 %d입니다.\n", max(x, y));
    return 0;
}
