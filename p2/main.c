#include <stdio.h>

int main(void)
{
    int N;              // 문자열 길이
    char str[100];      // 문자열 저장 배열

    int i;
    int count_letter = 0, max_letter = 0;      // 현재 연속된 소문자 개수, 최대 소문자 개수
    int count_num = 0, max_num = 0;            // 현재 연속된 숫자 개수, 최대 숫자 개수

    scanf("%d", &N);
    scanf("%s", str);
    // 각 문자들의 종류와 연속 여부를 확인하기 위해 문자열을 입력받음

    for(i = 0; i < N; i++)
    {
        // 문자열을 한 글자씩 검사해야 연속된 개수를 계산할 수 있기 때문에 반복문을 사용 

        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count_letter++;
            count_num = 0;
            // 소문자가 연속될 경우 count 증가
            // 숫자 연속은 끊기므로 count_num을 0으로 초기화

            if(count_letter > max_letter)
                max_letter = count_letter;
            // 연속된 길이 중 가장 긴 값을 출력해야 하기 때문에 최대값을 저장 
        }

        else if(str[i] >= '0' && str[i] <= '9')
        {
            count_num++;
            count_letter = 0;
            // 숫자가 연속될 경우 count 증가
            // 소문자 연속은 끊기므로 count_letter 초기화

            if(count_num > max_num)
                max_num = count_num;
        }

        else
        {
            count_letter = 0;
            count_num = 0;
            // 해당 조건에 속하지 않는 문자가 나오면 연속이 끊어지므로 모든 count 초기화
        }
    }

    printf("%d\n", max_letter);
    printf("%d\n", max_num);
    // 문제에서 “최대 연속 개수”만 요구했기 때문에 최대값만 출력 
    // 문제 요구대로 줄을 나누어 출력 

    return 0;
}
