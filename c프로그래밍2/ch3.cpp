#include <stdio.h>

// 1번
// int main(void){
//     unsigned int a = 10, *p;
//     unsigned int **pp;
//
//     p = &a;
//     pp = &p;
//     printf("%u %u %u %u %u %u %u\n", a, &a, p, *p, &p, *&a, *&p);
//
//     printf("%u\n",p);
//     printf("%u\n",&p);
//     printf("%u\n",pp);
//     printf("%u\n",*pp);
//     printf("%u\n",&pp);
//     printf("%u\n",*&p);
//     printf("%u\n",*&pp);
//     printf("%u\n",**&pp);
//
//     return 0;
// }

//2번
// int main(void)
// {
//     int x = 6;
//     int *p = &x;
//     printf("%d\n",x);
//     printf("%u\n",&x);
//     printf("%d\n",++(*p));
//     x=6;
//     printf("%d\n",++*p);
//     x=6;
//     printf("%d\n",(*p)++);
//     x=6;
//     printf("%d\n",*p++);
// }

//3번
// void change_it(int[]);
// int main(void)
// {
//     int a[5] ={0};
//
//     change_it(a);
//     printf("main() : a[0] = %d\n", a[0]);
//     return 0;
// }
// void change_it(int *a)
// {
//     int i=777, *q=&i;
//     a=q;
//     printf("change_it() : a[0] = %d\n", a[0]);
// }

//5번
// int main(void)
// {
//     int ary[5] = {10,15, 20, 25, 30};
//     int *ap = ary;
//     printf("%u\n",ap++);
//     printf("%u\n",ary++);
//     printf("%u\n",&ary[2]);
//     printf("%u\n",&ap[3]);
//     printf("%u\n",ap+2);
//     printf("%u\n",*ap);
//     printf("%u\n",ap[3]+1);
//     printf("%u\n",ary+2);
//     printf("%u\n",*ary+2);
//     printf("%u\n",&ary[0]+2);
//     printf("%u\n",&*ary+2);
//     printf("%u\n",&*(ary+2));
//     return 0;
// }

//6번
// int main(void)
// {
//
// }