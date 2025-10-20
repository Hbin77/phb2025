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

//5번
// #include <stdlib.h>
// int main(void)
// {
//     int *pi;
//     int sum = 0;
//     double avg;
//     pi = (int *)malloc(3*sizeof(int));
//     for (int i = 0; i < 3; i++)
//     {
//         scanf("%d", &pi[i]);
//         sum += pi[i];
//     }
//     avg = (double)sum / 3;
//     printf("sum = %d, avg = %f\n", sum, avg);
//     free(pi);
//     return 0;
// }

//6번
// #include <stdlib.h>
//
// int* get_me(int size)
// {
//     int *ptr;
//
//     // 동적 메모리 할당
//     ptr = (int *)malloc(size * sizeof(int));
//     printf("%d개의 정수를 저장할 메모리가 할당되었습니다.\n", size);
//     return ptr;  // 할당된 메모리 주소 반환
// }
//
// int main(void)
// {
//     int *arr;
//     int i;
//
//     // get_me() 함수 호출하여 5개 정수를 저장할 메모리 할당
//     arr = get_me(5);
//
//     // 5개의 정수 입력받기
//     printf("\n정수 5개를 입력하세요: ");
//     for(i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }
//
//     // 저장된 정수 출력
//     printf("\n저장된 정수들:\n");
//     for(i = 0; i < 5; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }
//
//     // 동적 메모리 해제
//     free(arr);
//     printf("\n메모리가 해제되었습니다.\n");
//
//     return 0;
// }