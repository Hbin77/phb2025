#include <stdio.h>
// 1번
// int main(void)
// {
//     int grade[] = {1, 2, 3, 4, 5};
//     int i, size;
//     size = sizeof(grade) / sizeof(grade[0]);
//     for (i = 0; i < size; i++)
//         printf("grade[%d] = %d\n",i, grade[i]);
//     return 0;
// }


// 2번
// #define N 10
// int main(void)
// {
//     int a[N];
//     int b[N][N];
//     printf("sizeof(a[N]) : %d\n", sizeof(a[N]));
//     printf("sizeof(a) : %d\n", sizeof(a));
//     printf("sizeof(b[N][N]) : %d\n", sizeof(b[N][N]));
//     printf("sizeof(b[N]) : %d\n", sizeof(b[N]));
//     printf("sizeof(b) : %d\n", sizeof(b));
//     return 0;
// }

// 3번, 4번
// int main(void)
// {
//     int key, i, SIZE;
//     printf("사용할 배열의 크기를 입력하세요: ");
//     scanf("%d", &SIZE);
//     int list[SIZE];
//     printf("총 %d개의 값을 배열에 입력하세요.\n", SIZE);
//     for (i = 0; i < SIZE; i++)
//     {
//         scanf("%d", &list[i]);
//     }
//     printf("\n입력된 배열: [ ");
//     for (i = 0; i < SIZE; i++)
//         printf("%d ", list[i]);
//     printf("]\n");
//
//     printf("Input a key value : ");
//     scanf("%d", &key);
//     for (i = 0; i < SIZE; i++)
//         if (list[i] == key)
//             printf("Find the key at %d of array\n", i+1);
//     printf("End\n");
//     return 0;
// }

// 5번
// #define N 6
// void copy_array(char a[]);
// int main(void)
// {
//     char a[N] = "Hello";
//     int i;
//     copy_array(a);
//     return 0;
// }
// void copy_array(char a[])
// {
//     char b[N];
//     for (int i = 0; i < N; i++)
//         b[i] = a[i];
//     printf("원본 배열 a: %s\n", a);
//     printf("복사된 배열 b: %s\n", b);
// }

// 6번
#include <string.h>
#define N 6
void copy_array(char a[]);
int main(void)
{
    char a[N] = "Hello";
    int i;
    copy_array(a);
    return 0;
}
void copy_array(char a[])
{
    char b[N];
    strcpy(b, a);
    printf("원본 배열 a: %s\n", a);
    printf("복사된 배열 b: %s\n", b);
}