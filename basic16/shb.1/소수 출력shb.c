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
    printf("2 �̻��� ������ �Է��ϼ���: ");
    scanf("%d", &n);
    printf("2���� %d ������ ��� �Ҽ�:\n", n);
    prims(n);
    return 0;
}