#include<stdio.h>
int main()
{
	int i,j,a[i],count,flag=0,temp;
	
	//getting the count
	
	
	printf("enter the limit");
	scanf("%d",&count);
	
	// getting  the values inarray
	for(i=0;i<count;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//reversing the array values
	
    for(i=0,j=count-1;i<count/2,j>count/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	
	//printing the reversed array
	for(i=0;i<count;i++)
	{
		printf("%d",a[i]);
		
    }
     //printing the array
    for(j=0;j<count;j++)
	{
		printf("%d",a[j]);
		
    }
   
    
    
    
    //checking pallindrome

    for(i=0,j=0;i<count,j<count;i++,j++)
    {
    	if(a[i]!=a[j])
    	{
    		flag=1;
    		break;
		}//endif	
	 
	}//end for
		
    if(flag==1)
	{
		printf(" not palindrome");
	}
	else
	{
		printf("palindrome");
	}//endif
	

}
