#include<stdio.h>
int main ()
{
    int a[1000],s[1000];
    int t,n,i,j,k=0,l=1;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        for(i=1; i<n+1; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1; i<n+1; i++)
        {
            for(j=i+1,k=1; j<n+1; j++,k++)
            {
                s[k]=a[i]+a[j]+j-i;
                printf("%d\n",k);
            }
        }
        /*for(k=1; k<1000; k++)
        {
            if(s[k]<s[1])
            {
                l=s[k];
            }
        }
        printf("%d",l);*/

    }
}
