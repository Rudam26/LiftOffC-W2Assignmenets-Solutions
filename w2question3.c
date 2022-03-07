#include<stdio.h>
#include<math.h>
int main()
{
	int n,first,count,last,a,b,swap;
	printf("Enter any number:");
	scanf("%d",&n);
	count=log10(n);
	first=n/pow(10,count);
	last=n%10;
	
	swap=last;
	swap=swap*(round(pow(10,count)));
	swap=swap+n%(int)(round(pow(10,count)));
	swap=swap-last;
	swap=swap+first;
	
	printf("The number after swapping =%d",swap);

	return 0;
}