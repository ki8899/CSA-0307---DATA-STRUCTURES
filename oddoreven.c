#include<stdio.h>
int main()
{
	int odd=0,even=0,n,i,arr[n];
	printf(" Enter  number of elements  : ");
	scanf("%d",&n);
	printf(" enter the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d , ",&arr[i]);
	}
	printf("\n even elements are : ");
	for(i=0;i<n;i++)
	{
		if (arr[i]%2==0)
		{
			even=even+1;
			printf("%d , ",arr[i]);
		}
	}
	printf("\n total even count : %d ",even);
	printf("\n odd ele are :%d ",odd);
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		{
			odd=odd+1;
			printf("%d , ",arr[i]);
		}
	}
	printf(" \n total odd count :%d ",odd);
	return 0;
}
