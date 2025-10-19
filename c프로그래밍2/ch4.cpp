#include <stdio.h>

// 1번
// #define SIZE 10
// int main(void)
// {
//     int key, i;
//     int list[SIZE]= {5,3,6,7,8,1,9,4,2,10};
//     int *ptr = list;
//     printf("Inpuut a key value : ");
//     scanf("%d", &key);
//     for(i=0; i<SIZE; i++)
//         if(key == *(ptr +i))
//             printf("Find key value : %d\n", i+1);
//     printf("End\n");
//     return 0;
// }

//2
// #define SIZE 10
// void find_key(int key, int *ptr, int size);
//
// int main(void)
// {
//     int key;
//     int list[SIZE] = {5, 3, 6, 7, 8, 1, 9, 4, 2, 10};
//     int *ptr = list;  // 배열을 가리키는 포인터 변수
//
//     printf("Input a key value : ");
//     scanf("%d", &key);
//     find_key(key, ptr, SIZE);
//
//     printf("End\n");
//     return 0;
// }
// void find_key(int key, int *ptr, int size)
// {
//     int i;
//
//     for(i = 0; i < size; i++)
//     {
//         if(key == *(ptr + i))
//             printf("Find key value : %d\n", i+1);
//     }
// }