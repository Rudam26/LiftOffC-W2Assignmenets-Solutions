#include<stdio.h>
int main()
{
	int arr[10],i,odd=0,even=0;
	printf("Enter 10 elements one by one");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if (arr[i]%2==0)
		{
		even=even+arr[i];
		}
		else{
		odd=odd+arr[i];
		}
	}
	printf("Sum of even numbers=%d\n ",even);
	printf("Sum of odd numbers=%d\n ",odd);
    return 0;
}