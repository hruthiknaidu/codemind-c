#include<stdio.h>
int main()
{
    int h,k,n,sum=0;
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        h=n%10;
        sum=sum*10+h;
        n=n/10;
    }
    if(k==sum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}