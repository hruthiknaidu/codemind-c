#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b,c,d,e,f,max=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[b];
    for(c=0;c<n;c++)
    {
        if(a[c]<max)
        {
            max=a[c];
        }
    }
    for(max;max>0;max--)
    {
        i=0;
        for(d=0;d<n;d++)
        {
            if(a[d]%max==0)
            {
                i++;
            }
        }
        if(i==n)
        {
            printf("%d",max);
            break;
        }
    }
}