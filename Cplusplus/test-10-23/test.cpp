#include <stdio.h>
int factorsum(int number){
    int result=1;
    for(int i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            
                result += i;
            
        }
    }
    return result;
}
int main()
{
    int m,n;
    //printf("Input m: ");
    scanf("%d",&m);
    // printf("Input n: ");
    // scanf("%d",&n);
    // for(int i=m;i<=n;i++)
    // {
    
        if(m==factorsum(m))
        {
            printf("%d",m);
        }
    //}
    return 0;
}