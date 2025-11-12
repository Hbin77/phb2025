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
//
// 3번
 int main(void)
{
      int x = 6;
      int *p = &x;
      int j[2][5]={{1, 2, 3, 4, 5},{6,7,8,9,10}};
      int *q = j[0];
      printf("%d\n",x);
      printf("%d\n",++(*p));
      x=6;
      printf("%d\n",++*p);
      x=6;
      printf("%d\n",(*p)++);
      x=6;
      printf("%d\n",*p++);
      printf("%d\n",*q);
      printf("%d\n",(*q)++);
     printf("%d\n",*q++);
     printf("%d",&j);

    return 0;
}

//4번
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
//     int point[] = {3,4,7,9,10};
//     int aryLength = sizeof(point)/sizeof(int);
//     int sum = 0;
//     for(int i=0; i<aryLength; i++)
//     {
//         sum += *(point++);
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// 7번
// int main(void)
// {
//     int a[]={1,2,3,4,5};
//     int *p=a;
//     printf("%d %d %d %d\n", sizeof(a), sizeof(a[0]), sizeof(p), sizeof(p[1]));
//     printf("%d %d %d %d\n", *a, *p, a[0], p[0]);
//     printf("%d %d %u %u\n", *(a+1), *(p+1), a+1, p+1);
// }