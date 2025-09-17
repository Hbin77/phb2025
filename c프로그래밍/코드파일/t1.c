// // 문제 1
// #include <stdio.h>
// int main(void) {
//     int number;
//     printf("Input number : ");
//     scanf("%d", &number);
//     printf("The area of the circle of the radius %d is %f\n", number, number * number * 3.14);
//     return 0;
// }

// // 문제 2
// #include <stdio.h>
// int main(void) {
//     char a = 'A';
//     char b = 'B';
//     printf("%c %c %c %c %c\n", a, a, a+1, b, b+1);
//     return 0;
// }

// // 문제 3
// #include <stdio.h>
// int main(void) {
//     int number;
//     printf("Enter number : ");
//     scanf("%d", &number);
//     printf("Octal value of %d is %o\n", number, number);
//     printf("Hexa value of %d is %X\n", number, number);
//     return 0;
// }

// // 문제 4
// #include <stdio.h>
// int main(void) {
//     int a = 1, b = 0, c = 0;
//     c = ++a || ++b && ++c;
//     printf("%d %d %d\n", a, b, c);

//     a = b = c = 0;
//     c = a++ || ++b && ++c;
//     printf("%d %d %d\n", a, b, c);

//     return 0;
// }

// // 문제 5
// #include <stdio.h>
// int main(void) {
//     int a = 6, b = 3;
//     printf("%d\n", a - b);
//     printf("%d\n", a + b);
//     printf("%d\n", a + ++b);
//     printf("%d\n", a++ + b);
//     return 0;
// }

// // 문제 6
// #include <stdio.h>
// int main(void) {
//     int a = 2, b = 3, c = 5, d = 7;
//     printf("%d\n", a + b - c);
//     printf("%d\n", a + b - d);
//     printf("%d\n", a + b * c);
//     printf("%d\n", a + b * 1 - 2);
//     return 0;
// }

// // 문제 7
// #include <stdio.h>
// int main(void) {
//     int x, y, z;
//     x = y = 2 + z = 3; // 오류 발생
//     printf("%d %d %d\n", x, y, z);
//     return 0;
// }

// // 문제 8: 수정된 코드
// #include <stdio.h>
// int main(void) {
//     int x, y, z;
//     z = 3;
//     y = 2 + z;
//     x = y;
//     printf("%d %d %d\n", x, y, z);
//     return 0;
// }

// // 문제 9: 간결하게 수정
// #include <stdio.h>
// int main(void) {
//     int x, y, z;
//     x = y = z = 3;
//     y = 2 + z;
//     x = y;
//     printf("%d %d %d\n", x, y, z);
//     return 0;
// }
