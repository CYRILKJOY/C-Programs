#include<stdio.h>
main()
{
	int i,sum,a[i],limit,odd,sum1,sum2=0;
	//getting the imit  
	printf("enter the numbers limit");
	scanf("%d",&limit);
	//geting the values into the array
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	//finding the sum
	sum=0;
	for(i=0;i<limit;i++)
	{
		sum=a[i]+sum;
    }
    //printing the results
   printf(" the sum is %d \n",sum);
   
   //checking the odd numbers

 	sum1=0;
    for(i=0;i<limit;i++)
    {
		if(a[i]%2==0)
   		{
   		sum1=a[i]+sum1;
   		}
   		else
   		{
   		sum2=a[i]+sum2;
		}
   	}
   	printf("the even sum is %d \n",sum1);
   	printf("the odd sum is %d",sum2);
	
}
