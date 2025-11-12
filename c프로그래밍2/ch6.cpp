#include <cstdlib>
#include <stdio.h>
#include <string.h>

// 1번
// int main(void)
// {
//     struct person
//     {
//         char name[20];
//         int age;
//     };
//
//     typedef struct person person;
//     person kim;
//
//     strcpy(kim.name, "ParkHyunbin");
//     kim.age = 20;
//     printf("%s %d\n", kim.name, kim.age);
//
//     return 0;
//
//
// }

//2번
// int main(void)
// {
//     struct person
//     {
//         char name[20];
//         int age;
//     };
//
//     typedef struct person person;
//     person kim;
//     person *kim_point;
//     kim_point = &kim;
//     printf("%s %d\n", kim_point->name, kim_point->age);
// }

//3번
// int main(void)
// {
//     union person
//     {
//         char name[20];
//         int age;
//     };
//
//     typedef union person person;
//     person kim;
//
//     strcpy(kim.name, "ParkHyunbin");
//     kim.age = 20;    // 주의: 이 시점에서 name의 데이터는 덮어씌워집니다
//     printf("%s %d\n",kim.name, kim.age);
//
//     return 0;
// }

//4번
// struct person
// {
//     char name[20];
//     char tel[20];
//     char address[80];
// };
// int main()
// {
//     int i;
//     person p[2] = {{"Hong gil dong","010-1111-1111","Jeonnam sunchon"},
//     {"Lee sun sin","010-2222-2456","Jeonnam sunchon"}};
//     printf("%16s%20s%30s\n\n","name","telephone number","address");
//     for(i=0; i<1; i++)
//         printf("%16s%20s%30s\n",p[i].name,p[i].tel,p[i].address);
//     return 0;
// }

// 6번
// struct student
// {
//     int Id;
//     char name[20];
//     int kor;
//     int eng;
//     int math;
// };
// int main()
// {
//     int i;
//     student s[5] = {{111111,"ParkHyunbin",90,80,90},
//                     {222222,"LeeSunSin",80,90,80},
//                     {333333,"KimJongHwan",70,80,70},
//                     {444444,"KimMinSoo",40,90,60},
//                     {555555,"LeeTeaHo",50,50,50}};
//     printf("%10s%10s%10s%10s%10s%10s%10s\n","Id","name","kor","eng","math","total","average");
//     for(i=0; i<5; i++)
//     {
//         int total = s[i].kor + s[i].eng + s[i].math;
//         int average = total / 3;
//         printf("%10d%10s%10d%10d%10d%10d%10d\n",s[i].Id,s[i].name,s[i].kor,s[i].eng,s[i].math,total,average);
//     }
//     return 0;
// }