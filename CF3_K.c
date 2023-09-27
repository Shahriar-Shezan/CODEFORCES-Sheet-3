#include<stdio.h>
int main ()
{
    int a[1000000];
    int n,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%1d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    printf("%d",s);
    return 0;
}
