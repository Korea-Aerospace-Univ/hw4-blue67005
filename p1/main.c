#include <stdio.h>

int main(void) {
    int answer;       // 정답을 저장할 변수
    int guess;        // 사용자가 입력하는 추측값을 저장할 변수
    int count = 0;    // 시도 횟수를 저장할 변수

    // 첫 번째 입력은 '정답'으로 설정
    scanf("%d", &answer);

    // do ~ while문을 사용하여 최소 한 번은 실행되도록 함 
    // 사용자가 정답을 맞출 때까지 반복해야 하므로 사용 
    do {
        scanf("%d", &guess); // 사용자의 추측값 입력
        count++;             // 입력할 때마다 시도 횟수 1 증가

        if (guess > answer) {
            // 입력값이 정답보다 클 경우
            printf("%d>?\n", guess);
        } 
        else if (guess < answer) {
            // 입력값이 정답보다 작을 경우
            printf("%d<?\n", guess);
        } 
        else {
            // 정답을 맞춘 경우 (guess == answer)
            printf("%d==?\n", guess);
        }

    } while (guess != answer); 
    // 조건식: 입력값과 정답이 같지 않은 동안 계속 반복합니다. 
    // 같아지는 순간 종료 

    // 루프 탈출 후 최종 시도 횟수 출력 (예시 형식 준수)
    printf("시도횟수는 %d회\n", count);

    return 0;
}
