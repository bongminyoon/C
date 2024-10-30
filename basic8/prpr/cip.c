#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "kin,lee,park";
    char* ptr = strtok(str, ",");
    char* ptoken[5] = { 0 };
    ptoken[0] = ptr;
    int i = 1;

    while (ptr != NULL)
    {
        ptoken[i++] = ptr;
        ptr = strtok(NULL, ",");
     
    }
    for (int j = 0; j < i; j++)
    {
        printf("%s\n", ptoken[j]);
    }
    return 0;
}
