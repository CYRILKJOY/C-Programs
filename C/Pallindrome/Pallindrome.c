#include<stdio.h>
int main()
{
	int i,a[i],limit,j,n,temp,flag =1;
	
	//retrieving the limit of the array 
	
	printf("enter the limit");
	scanf("%d",&limit);
	
	//capturing the values into the array a[i]
	
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	
	/**********************REVERSING*************************
	   ******************THE VALUES***********************/
	
	
	j=limit-1;
	for(i=0;i<limit/2;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	
	// PRINTING THE REVERSED VALUES
	
	for(i=0;i<limit;i++)
	{
	    printf("%d",a[i]);
    } 
    
    
    
    //CHECKING THE palindrome//
    
    
    
    for(i=0,j=0;i<limit,j<limit;i++,j++)
    {
    if(a[i]!=a[j])
    {
        flag=0;
    }
    else
    {
        flag=1;
    }
    }
    
    //PRINTING THE RESULT//
    if(flag=1)
    {
        printf("its a palindrome");
    }
    else
    {
        printf("its not a palindrome");
    }
}
