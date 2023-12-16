#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    int acet[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&acet[i]);
    }

    for(i=0;i<n;i++)
    {
        if(acet[i]%2!=0)
        {
            c=c+acet[i];
        }
    }
    printf("%d",c);
}