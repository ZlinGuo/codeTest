// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int cmp(const void* a, const void* b)
// {
//     return (*(char*)a - *(char*)b);
// }

// int main() {
//     char str[1001] = {0};
//     scanf("%s",str);
//     int sz = strlen(str);
//     qsort(str, sz, sizeof(char), cmp);
//     printf("%s",str);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     char str[99999];
//     int cmp[128]={0},ans=0;
//     gets(str);
//     int len=strlen(str);
//     for(int i=0; i<len; i++)
//     {
//         if(str[i]<128&&str[i]>-1&&cmp[str[i]]==0)
//         {
//             cmp[str[i]]++;
//             ans++;
//         }
//     }
//     printf("%d",ans);
// }


void rotate(int* nums, int numsSize, int k) {
    int arr[2 * numsSize];
    int j = 0;
    for(int i = 0; i < 2 * numsSize; i++)
    {
        arr[i] = nums[j];
        if(nums[j + 1] == '\0')
        j = 0;

    }
    j = numsSize - k;
    for(int i = 0; i < numsSize; i++,j++)
    {
        nums[i] = arr[j];
    }
}

#include <stdio.h>
int main()
{
    int nums[] = {1,2,3,4,5,6,7};
    int sz = 7;
    int k =3;
    rotate(&nums, sz, k);
    return 0;
}