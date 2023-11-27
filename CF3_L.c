#include<stdio.h>
int main ()
{
    int x,n,t,i,j,sz,z,mx;
    int a[100];
    scanf("%d",&x);
    for(t=0;t<x;t++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(sz=1;sz<=n;sz++)
        {
            for(z=0;z<=n-sz;z++)
            {
                mx=a[z];
                for(i=z;i<z+sz;i++)
                {
                    if(mx<a[i])
                    {
                        mx=a[i];
                    }
                }
                 printf("%d ",mx);
            }
        }
        printf("\n");
    }

}
