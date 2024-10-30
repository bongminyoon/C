#include <stdio.h>
 
int is_prime(int num) {
    for (int i = 2; i*i  <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}


void  prims(int n) {
    int count = 0;
    for (int num = 2; num <= n; num++) {
        if (is_prime(num)) {
            printf("%3d ", num); 
            count++;
            if (count % 5 == 0)
                printf("\n");
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("2 이상의 정수를 입력하세요: ");
    scanf("%d", &n);
    printf("2부터 %d 까지의 모든 소수:\n", n);
    prims(n);
    return 0;
}