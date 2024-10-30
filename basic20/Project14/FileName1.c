#include <stdio.h>

int main(void)
{
    char animal[5][20];
    int i;
    int count;

    count = sizeof(animal) / sizeof(animal[0]);
    for (i = 0; i < count; i++)
    {
        scanf("%s", animal[i]);
    }
    for (i = 0; i < count; i++)
    {
        printf("%s", animal[i]);
    }
    return 0;
}

/* {
    int num1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int num2[3][4] = { {1}, {5, 6}, {9, 10, 11} };
    int num3[][4] = { {1}, {2, 3}, {4, 5, 6} };
    int num4[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    int num5[3][4] = { 1, 2, 3, 4, 5, 6 };
    int num6[][4] = { 1, 2, 3, 4, 5, 6, };
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", num1[i][j]);
        }
        printf("\n");
    }

    return 0;
    }*/
