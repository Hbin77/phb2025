#include <stdio.h>
//1번
// void f(int *a);
// int main(void)
// {
//     char s[] = "I like C.";
//     char *p = "I like C.";
//     int a[3];
//     double d[5];
//     printf("%d %d %d %d\n", sizeof(s),sizeof(p),sizeof(a),sizeof(d));
//     printf("%s %s\n", s, p);
//     f(a);
//     return 0;
// }
// void f(int *a)
// {
//     printf("%d\n", sizeof(a));
// }

//2번
// int main(void)
// {
//     int a[2][3]={10,12,24,87,15,36};
//     printf("%d,%d,%d\n",sizeof(a),sizeof(a[0]),sizeof(a[0][0]));
//     printf("%d\n", **a);
//     printf("%d\n", **(a +1));
//     printf("%d\n", *(*a +4));
//     printf("%d\n", *(*(a+1) +2));
//     printf("%d\n", (*(a+1))[1]);
//     printf("%d\n", *(a[1] +2));
//     return 0;
// }

//3번
// int main(void)
// {
//     char *p[6] = {"abc","defg","hi","jklmno","pqrstuvw","xyz"};
//     printf("%c %c %s %c %s %c %c", **p, *p[1], p[2], *(p[1] +2), *((p+1)+1), *(*(p+1)+2),*(*(p+4)+2));
// }