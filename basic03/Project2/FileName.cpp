#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int array[], size_t array_len, int n) {
    int answer = 0;

    for (int i = 0; i < array_len; i++) {
        if (array[i] == n) {
            answer++;
        }
    }

    return answer;
}

int main() {
    int array[] = { 1, 4, 4, 4, 5 };
    size_t array_len = sizeof(array) / sizeof(array[0]);
    int n = 4;

    int result = solution(array, array_len, n);
    printf("정수 %d의 출현 횟수: %d\n", n, result);

    return 0;
}
