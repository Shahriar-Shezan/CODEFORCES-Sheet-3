#include<stdio.h>
int main ()
{
    int a[10000];
    int n,i,m,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<m)
        {
            m=a[i];
        }
    }
    //printf("%d",m);
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            c+=1;
        }
    }
    //printf("%d",c);
    if(c%2!=0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }
    return 0;
}
