// 실습 7
#include <stdio.h>

// 1번
// int main(void)
// {
//     int i=7, j=10;
//     printf("%d %d %d\n\n",i&j, i|j, i^j);
//     return 0;
// }

// 2번
// int main(void)
// {
//     int i=7, num;
//     printf("Input number : ");
//     scanf("%d", &num);
//     printf("Binary number of %d in ", num);
//     for (i; i>=0; --i)
//     {
//         printf("%d", (num>>i)&1);
//     }
//     return 0;
// }

//3-4번 2번 조금 수정

//5번
// #include <stdio.h>
//
// int main(void)
// {
//     int num, i;
//
//     printf("Input number : ");
//     scanf("%d", &num);
//
//     printf("Binary number of %d is : ", num);
//
//     for (i = 31; i >= 0; i--)
//     {
//         printf("%d", (num >> i) & 1);
//         if (i % 8 == 0 && i != 0)
//             printf(" ");
//     }
//
//     printf("\n");
//
//     return 0;
// }

// #include <stdio.h>
//
// int main(void)
// {
//     unsigned int student_id;    // 학번 (8자리)
//     unsigned int dept_code;     // 학과코드 (4자리)
//     unsigned int gender;        // 성별 (0=남자, 1=여자)
//     unsigned long long packed;  // 패킹된 데이터
//
//     // ===== 입력 =====
//     printf("===== 데이터 입력 =====\n");
//     printf("학번 (8자리) : ");
//     scanf("%u", &student_id);
//
//     printf("학과코드 (4자리) : ");
//     scanf("%u", &dept_code);
//
//     printf("성별 (0=남자, 1=여자) : ");
//     scanf("%u", &gender);
//
//     // ===== 패킹 (Packing) =====
//     // 비트 구조: [학번(27bit)] [학과코드(14bit)] [성별(1bit)]
//     packed = ((unsigned long long)student_id << 15) |
//              ((unsigned long long)dept_code << 1) |
//              gender;
//
//     printf("\n===== 패킹 결과 =====\n");
//     printf("Packed Data : %llu (10진수)\n", packed);
//     printf("Packed Data : 0x%llX (16진수)\n\n", packed);
//
//     // ===== 언패킹 (Unpacking) =====
//     unsigned int unpacked_id = (packed >> 15) & 0x7FFFFFF;    // 27비트 추출
//     unsigned int unpacked_dept = (packed >> 1) & 0x3FFF;      // 14비트 추출
//     unsigned int unpacked_gender = packed & 0x1;              // 1비트 추출
//
//     printf("===== 언패킹 결과 =====\n");
//     printf("학번 : %08u\n", unpacked_id);
//     printf("학과코드 : %04u\n", unpacked_dept);
//     printf("성별 : %u (%s)\n", unpacked_gender,
//            unpacked_gender ? "여자" : "남자");
//
//     return 0;
// }

//7번

#include <stdio.h>

// 비트 필드 구조체 정의
struct StudentInfo {
    unsigned int gender : 1;        // 성별 (1비트)
    unsigned int dept_code : 14;    // 학과코드 (14비트)
    unsigned int student_id : 27;   // 학번 (27비트)
    // 총 42비트 = 6바이트 (실제로는 8바이트로 정렬됨)
};

// Union을 사용하여 raw 데이터와 비트 필드 동시 접근
union PackedData {
    unsigned long long raw;         // 전체 데이터 (64비트)
    struct StudentInfo fields;      // 비트 필드로 접근
};

int main(void)
{
    unsigned int student_id;
    unsigned int dept_code;
    unsigned int gender;
    union PackedData data;

    // ===== 입력 =====
    printf("===== 데이터 입력 =====\n");
    printf("학번 (8자리) : ");
    scanf("%u", &student_id);

    printf("학과코드 (4자리) : ");
    scanf("%u", &dept_code);

    printf("성별 (0=남자, 1=여자) : ");
    scanf("%u", &gender);

    // ===== 패킹 (Packing) - 비트 필드 사용 =====
    data.fields.student_id = student_id;
    data.fields.dept_code = dept_code;
    data.fields.gender = gender;

    printf("\n===== 패킹 결과 =====\n");
    printf("Packed Data : %llu (10진수)\n", data.raw);
    printf("Packed Data : 0x%llX (16진수)\n", data.raw);
    printf("구조체 크기 : %zu 바이트\n\n", sizeof(union PackedData));

    // ===== 언패킹 (Unpacking) - 비트 필드로 직접 접근 =====
    printf("===== 언패킹 결과 =====\n");
    printf("학번 : %08u\n", data.fields.student_id);
    printf("학과코드 : %04u\n", data.fields.dept_code);
    printf("성별 : %u (%s)\n", data.fields.gender,
           data.fields.gender ? "여자" : "남자");

    // ===== 검증 =====
    printf("\n===== 검증 =====\n");
    if (student_id == data.fields.student_id &&
        dept_code == data.fields.dept_code &&
        gender == data.fields.gender)
    {
        printf("✓ 패킹/언패킹 성공!\n");
    }
    else
    {
        printf("✗ 오류 발생!\n");
    }

    return 0;
}