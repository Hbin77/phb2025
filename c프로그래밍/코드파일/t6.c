#include <stdio.h>
int main(void) {
    int i=1;
    int n;
    int sum=0;
    scanf("%d", &n);
    while (i <= n) {
        if(i % 2 != 0) {
            sum += i;
            i++;
        }
    }
    printf("%d\n", sum);
    return 0;
}
//     return 0;
// }    