#include <stdio.h>

int main(void)
{
    int answer;   // 정답을 저장하는 변수 (기준값 역할)
    int input;    // 사용자가 계속 입력하는 값을 저장
    int count = 0; // 시도 횟수를 세기 위한 변수

    // 먼저 정답을 입력받는 이유:
    // 이후 입력되는 값들과 비교하기 위한 '기준'이 필요하기 때문
    scanf("%d", &answer);

    // do ~ while을 사용하는 이유:
    // 최소 1번은 반드시 입력을 받아야 하기 때문
    do
    {
        scanf("%d", &input);  // 사용자 입력
        count++;              // 시도 횟수 증가

        // if문을 사용하는 이유:
        // 입력값과 정답의 대소 관계에 따라 다른 기호를 출력해야 하기 때문
        if (input > answer)
        {
            printf("%d>?\n", input);
        }
        else if (input < answer)
        {
            printf("%d<?\n", input);
        }
        else
        {
            printf("%d==?\n", input);
        }

    } while (input != answer);

    // 반복 종료 후 시도 횟수 출력
    // "→ 이후는 출력하지 말라"는 조건 때문에 화살표 제거
    printf("시도횟수는 %d회\n", count);

    return 0;
}
