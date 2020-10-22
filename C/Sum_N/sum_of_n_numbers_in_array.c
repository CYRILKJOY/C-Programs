#include<stdio.h>
main()
{
	int i,a[i],sum,limit;
	//getting the limit 
	printf("enter the number of terms");
	scanf("%d",&limit);
	
	//getting the values into the array
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//finding the sum of the values
	sum=0; 
	for(i=0;i<limit;i++)
	{
		sum=a[i]+sum;
	}
	
	//printing the result
	printf("%d",sum);
}
