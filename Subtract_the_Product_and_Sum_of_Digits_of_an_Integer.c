#include<stdio.h>
int main()
{
    int sum=0,p=1,sub,n,r,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        p=p*r;
        sum=sum+r;
        q=q/10;
    }
    sub=p-sum;
    printf("%d",sub);
}