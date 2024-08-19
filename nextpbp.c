#include<stdio.h>
int main()
{
	int i,n,c,j,bp=0,np=0;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			np=i;
			break;
		}
	}
	printf("%d",np);
}
