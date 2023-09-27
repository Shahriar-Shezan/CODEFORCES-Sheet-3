#include<stdio.h>
int main ()
{
    int a[10000];
    int n,i,t,l,h,p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    p=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<l)
        {
            l=a[i];
            p=i;
        }
    }
    //printf("%d %d\n",l,p);
    h=a[0];
    q=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            h=a[i];
            q=i;
        }
    }
    //printf("%d %d",h,q);
    t=a[q];
    a[q]=a[p];
    a[p]=t;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
