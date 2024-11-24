#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b)
{
    return (*(char*)a - *(char*)b);
}
int main() {
    char str[1001] = { 0 };
    scanf("%s", str);
    int sz = 0;
    for (int i = 0; str[i] != 0; i++)
    {
        sz++;
    }
    qsort(str, sz, sz * sizeof(char), cmp);
    printf("%s", str);
    return 0;
}