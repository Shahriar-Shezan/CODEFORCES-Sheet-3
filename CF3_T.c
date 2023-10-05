#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a[100][100];
    int n,i,j,s=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s+=a[i][i];
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
        p+=a[i][j];
    }
    printf("%d",abs(s-p));
}
