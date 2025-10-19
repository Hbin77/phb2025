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

//3번
// #define SIZE 10
// void find_key(int key, int *ptr, int size);
// void increase_array(int *ptr, int size);
//
// int main(void)
// {
//     int key;
//     int list[SIZE] = {5, 3, 6, 7, 8, 1, 9, 4, 2, 10};
//     int *ptr = list;  // 배열을 가리키는 포인터 변수
//
//     increase_array(ptr, SIZE);
//
//     printf("Input a key value : ");
//     scanf("%d", &key);
//     find_key(key, ptr, SIZE);
//
//     printf("End\n");
//     return 0;
// }
// void increase_array(int *ptr, int size)
// {
//     int i;
//
//     for(i = 0; i < size; i++)
//     {
//         *(ptr + i) += 1;
//     }
//     return;
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

// 4번
// #include <stdlib.h>  // atoi() 함수 사용을 위해 추가
//
// #define SIZE 10
// void find_key(int key, int *ptr, int size);
// void increase_array(int *ptr, int size);
//
// int main(int argc, char *argv[])  // 명령행 인자 받기
// {
//     int key;
//     int list[SIZE] = {5, 3, 6, 7, 8, 1, 9, 4, 2, 10};
//     int *ptr = list;
//
//     // 배열의 모든 원소를 1씩 증가
//     increase_array(ptr, SIZE);
//
//     // 명령행 인자를 정수로 변환
//     key = atoi(argv[1]);
//     printf("입력된 키 값: %d\n", key);
//
//     // 키 값 찾기
//     find_key(key, ptr, SIZE);
//
//     printf("End\n");
//     return 0;
// }
//
// void increase_array(int *ptr, int size)
// {
//     int i;
//
//     for(i = 0; i < size; i++)
//     {
//         *(ptr + i) += 1;
//     }
//     return;
// }
//
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

// 5번
#include <stdlib.h>  // atoi() 함수 사용을 위해 추가

// void find_key(int key, int *ptr, int size);
// void increase_array(int *ptr, int size);
//
// int main(int argc, char *argv[])  // 명령행 인자 받기
// {
//     int i, key, size;
//     int *list;
//
//     size = atoi(argv[1]);
//     list = (int *)malloc(sizeof(int) * size);
//
//     printf("%d개의 정수를 입력하세요:\n", size);
//     for(i = 0; i < size; i++)
//     {
//         printf("[%d] : ", i);
//         scanf("%d", &list[i]);
//     }
//
//     // 배열의 모든 원소를 1씩 증가
//     increase_array(list, size);
//
//     // 명령행 인자를 정수로 변환
//     key = atoi(argv[2]);
//     printf("입력된 키 값: %d\n", key);
//
//     // 키 값 찾기
//     find_key(key, list, size);
//     free(list);
//
//     printf("End\n");
//     return 0;
// }
//
// void increase_array(int *ptr, int size)
// {
//     int i;
//
//     for(i = 0; i < size; i++)
//     {
//         *(ptr + i) += 1;
//     }
//     return;
// }
//
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