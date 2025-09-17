#include <stdio.h>

// 1번
// int main(void)
// {
//     int i=10, j=20;
//     int *p, *q;
//     p = &i;
//     *p=*p*4;
//     q=&j;
//     *q=*q*3;
//     printf("i=%d j=%d", i, j);
//     return 0;
// }

// 2번
// int main(void)
// {
//     char a, b, *p, *q;
//     a = 'x';
//     b = 'y';
//     p = &a;
//     q = &b;
//     printf("%c %c %p %p\n", a, b, &a, &b);
//     printf("%p %p %p %p", p, q, &p, &q);
//     return 0;
// }

// 3번
// int main(void)
// {
//     char c, *cp;
//     int i, *ip;
//     long long ll, *llp;
//     float f, *fp;
//     double d, *dp;
//
//     d = i;
//     dp=&d;
//     i=cp;
//     ip=&i;
//     dp=ip;
//     ip=(int *)cp;
//     return 0;
// }

// 4번
// int main(void)
// {
//     char c = 'Z';
//     char *cp = &c;
//     int n = 100;
//     int *np = &n;
//
//     printf("%d %d %d\n", sizeof(c), sizeof(*cp), sizeof(cp));
//     printf("%d %d %d\n", sizeof(n), sizeof(*np), sizeof(np));
//     return 0;
//
// }

//5번
// int main(void)
// {
//     unsigned int a = 10, *p;
//     p=&a;
//
//     printf("%u\n",a);
//     printf("%u\n",&a);
//     printf("%u\n",p);
//     printf("%u\n",*p);
//     printf("%u\n",&p);
//     printf("%u\n",*&a);
//     printf("%u\n",*&p);
//
//     return 0;
// }

// 6번
int main(void)
{
    int *p, i, j=20;
    void *v;

    v =&j;
    i = *(int *)v + 10;
    printf("%d\n", i);
    return 0;
}