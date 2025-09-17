#include <stdio.h>
#include <ctype.h>

void up_down_case(int c);

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        up_down_case(c);
    }

    return 0;
}