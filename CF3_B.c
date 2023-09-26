#include<stdio.h>
int main ()
{
    int a[100000];
    int n,x,i,f=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            f=i;
            break;
        }
    }
    if(f>=0)
    {
        printf("%d",f);
    }
    else
    {
        printf("-1");
    }
    return 0;
}

