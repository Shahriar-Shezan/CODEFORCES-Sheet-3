#include<stdio.h>
int main ()
{
    int a[100000];
    int n,i,l,p;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[1];
    p=1;
    for(i=1;i<=n;i++)
    {
        if(a[i]<l)
        {
            l=a[i];
            p=i;
        }
    }
    printf("%d %d",l,p);
    return 0;
}
