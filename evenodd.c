#include<stdio.h>
int main()
{
	int i=1,n,esum=0,osum=0;
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			esum=esum+i;
		}
		else
		{
			osum=osum+i;
		}
		i++;
	}
	printf("even sum is:%d odd sum is:%d",esum,osum);
}
