#include <stdio.h>

int main(void)
{   
    int answer;   // 정답 저장 변수
    int input;    // 사용자가 입력하는 값
    int count=0;  // 시도 횟수 저장

    scanf("%d", &answer);  // 정답 먼저 입력 : 이후 사용자가 입력한 값과 비교하기 위한 기준값이 필요하기 때문

    // 이 문제는 정답을 맞출 때까지 최소 1번은 반드시 실행되어야 하므로 
    // 조건을 나중에 검사하는 do-while을 사용
    do
    {
        scanf("%d", &input);  // 사용자 입력 받기
         // 사용자가 정답을 맞출 때까지 계속 시도해야 하기 때문에 반복마다 새로운 값을 입력받음
        count++;              // 총 시도 횟수를 출력해야 하므로 입력할 때마다 증가시킴

        // 입력값과 정답을 비교하여 크기 관계 출력
        if(input > answer)
            printf("%d>?\n", input);
        else if(input < answer)
            printf("%d<?\n", input);
        else
            printf("%d==?\n", input);
             // if문을 사용하는 이유:
             // 입력값과 정답의 대소 관계에 따라 서로 다른 결과를 출력해야 하기 때문

        if(input > answer)
            printf("%d보다 낮습니다\n", input);   //  띄어쓰기 제거
        else if(input < answer)
            printf("%d보다 높습니다\n", input);   //  띄어쓰기 제거
        else
            printf("%d 정답입니다\n", input);
         // 두 번째 if문을 따로 사용하는 이유:
         // 비교 결과 출력과 설명 출력의 역할을 분리하여 코드의 구조를 명확하게 하기 위해 사용

    } while(input != answer);  // 정답일 때 종료

    printf("%d 시도횟수는 %d회\n", answer, count);
    // 반복 종료 후 총 시도 횟수 출력
    // 정답을 맞춘 뒤에만 총 시도 횟수를 알 수 있기 때문에 반복이 끝난 후 결과를 출력

    return 0;
}
