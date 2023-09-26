#include<stdio.h>
int main ()
{
    int a[100000];
    int n,i,j,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        if(a[i]!=a[j])
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
