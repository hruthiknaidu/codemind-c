#include<stdio.h>
int main()
{
    int h,n,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        h=n%10;
        n=n/10;
        sum=sum*10+h;
    }
    printf("%d",sum);
}