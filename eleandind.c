#include <stdio.h>

int main()
{
    
    int n,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",a[i],i);
    }
