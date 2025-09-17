#include <stdio.h>
#include <ctype.h>

void up_down_case(int c) {
    if (islower(c)) {
        putchar(toupper(c));
        putchar('\n');
    } else if (isupper(c)) {
        putchar(tolower(c));
        putchar('\n');
    }
}

int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        up_down_case(c);
    }
    return 0;
}
