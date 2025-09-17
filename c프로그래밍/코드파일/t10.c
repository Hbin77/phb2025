#include <stdio.h>
#include <ctype.h>

void up_down_case(int c) {
    if (islower(c)) {
        putchar(toupper(c));
        putchar('\n');
    }
    else if (isupper(c)) {
        putchar(tolower(c));
        putchar('\n');
    }
    // 그 외에는 아무것도 출력하지 않음
}

int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        up_down_case(c);
    }
    return 0;
}
