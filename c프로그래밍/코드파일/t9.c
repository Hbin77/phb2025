#include <stdio.h>

int z;
void f(int x)
{
    x = 2;
    z += x;
}
int main(void)
{
    z = 5;
    f(10);
    printf("z = %d\n", z);
    return 0;
}