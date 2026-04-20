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
    // 이 문제는 "정답을 맞출 때까지" 반복해야 하는데,
    // 최소 1번은 반드시 입력을 받아야 하므로
    // 조건 검사 전에 실행되는 do~while이 적합함
    do
    {
        // 사용자로부터 값을 계속 입력받기 위해 반복적으로 scanf 사용
        scanf("%d", &input);

        // 입력이 들어올 때마다 시도 횟수를 증가시킴
        // 몇 번 만에 맞췄는지 출력하기 위해 필요
        count++;

        // 입력값이 정답보다 클 때
        // 왜 이렇게 작성했냐면:
        // 문제에서 "10>? 10 보다 낮습니다" 형태로 출력해야 하므로
        // 입력값을 그대로 두 번 사용해야 하기 때문
        if (input > answer)
        {
            printf("%d>? %d 보다 낮습니다\n", input, input);
        }
        // 입력값이 정답보다 작을 때
        else if (input < answer)
        {
            printf("%d<? %d 보다 높습니다\n", input, input);
        }
        // 입력값이 정답과 같을 때
        else
        {
            // ==? 형식도 문제에서 요구한 출력 형식이므로 그대로 맞춤
            printf("%d==? %d 정답입니다\n", input, input);
        }

        // input이 answer와 같으면 반복 종료
        // 조건을 while에서 검사하도록 구조를 분리함
    } while (input != answer);

    // 반복이 끝난 후 총 시도 횟수 출력
    // 문제에서 "시도횟수는 n회" 형식을 요구하므로 그대로 출력
    printf("%d → 시도횟수는 %d회\n", count, count);

    return 0;
}
