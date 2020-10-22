#include<stdio.h>
main()
{

int i,fact,a;
printf("enter the number");
scanf("%d",&a);
fact=1;
for(i=1;i<=a;i++)
	{
	
	fact=fact*i;
	
	
	}
	printf("%d",fact);
}
