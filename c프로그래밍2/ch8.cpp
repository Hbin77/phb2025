#include <stdio.h>

// 1번
// #define print(a,b) printf("a * b = %3d \n",a*b);
// int main()
// {
//     int a=7,b=2;
//     print(a,b);
//     return 0;
// }

// 2번
// #include "test.h"
// int main()
// {
//     int a = 7, b=2;
//     print(a,b)
//     return 0;
// }

// 4번

// #include "sqr.h"
// #include <stdio.h>
//
// int main(void)
// {
//     int x;
//
//     printf("정수를 입력하세요: ");
//     scanf("%d", &x);
//     PRTSQR(x);
//
//     return 0;
// }

//5번
#include <stdio.h>   // printf 함수를 사용하기 위해 필요합니다.
#include <stdlib.h>  // atof, exit 함수를 사용하기 위해 필요합니다.

/*
 * 1. 삼각형 넓이를 구하는 매크로 정의
 *
 * 매크로는 단순 텍스트 치환이므로, 연산자 우선순위 문제를 피하기 위해
 * 각 인자(w, h)와 전체 수식을 괄호()로 감싸는 것이 매우 중요합니다.
 * 또한, 2.0으로 나누어 정수 나눗셈이 아닌 부동 소수점 나눗셈을 보장합니다.
 */
#define TRI_AREA(w, h) ( ((w) * (h)) / 2.0 )

/*
 * 2. 메인 함수
 * int argc: 명령행 인자의 '개수' (argument count)
 * char *argv[]: 명령행 인자의 '내용' (argument vector), 문자열 배열
 */
int main(int argc, char *argv[])
{
    float width;  // 밑변
    float height; // 높이
    float area;   // 넓이

    // 3. 사용자가 프로그램을 올바르게 실행했는지 확인
    //    (./program_name width height) 형태로 총 3개가 들어와야 함
    if (argc != 3) {
        printf("사용 방법: %s <밑변> <높이>\n", argv[0]);
        printf("예시: %s 10.5 5.0\n", argv[0]);
        return 1; // 오류가 있음을 알리고 프로그램 종료
    }

    // 4. 명령행 인자(문자열)를 float 타입 숫자로 변환
    //    argv[0]은 프로그램 실행 경로/이름입니다.
    //    argv[1]이 첫 번째 인자(밑변), argv[2]가 두 번째 인자(높이)입니다.
    width = (float)atof(argv[1]);
    height = (float)atof(argv[2]);

    // 5. 매크로를 호출하여 넓이 계산
    area = TRI_AREA(width, height);

    // 6. 결과 출력
    printf("밑변 %.2f, 높이 %.2f인 삼각형의 넓이: %.2f\n", width, height, area);

    return 0; // 프로그램 정상 종료
}