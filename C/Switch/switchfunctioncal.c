#include<stdio.h>

//****************************************************addition using the switch case and the functions****************//

//function prototype


float addition(float a,float b);
float multiplication(float a,float b);
float  subtraction(float a,float b);
float division(float a,float b);
int validate (float a,float b,char ch);
int validateswitch(float a,float b,char ch);

void main()

{
	float a,b;
	char ch;int flag=1;
	
	//getting the a value
	
	
	printf("enter the value for a:\n");
	scanf("%f",&a);
	
	//getting the b value
	
	printf("enter the value for b:\n");
	scanf("%f",&b);
			
	//selecting the option
	
	printf("enter your option (+,-,*,/): ");
	scanf(" %c",&ch);
	
	//validation
	
	
	flag=validate(a,b,ch) ;
	if(flag==1)
	{
	   int validateswitch(float a,float b,char ch);
	}
	
}
	


//function declaration



int validateswitch(float a,float b,char ch)
{
	float result;
	
	switch(ch)
	{
		
		case '+':
          //function call   
			result=addition(a,b);  
			printf(" the addition of the numbers is :%f",result);
			break;
			
		case '-':
	        //function call
			result=subtraction(a,b);
			printf(" the subtraction of the numbers is :%f",result);
			break;
		
		case '*':
			
	      //function call
			result=multiplication(a,b);
			printf("the multiplication of the numbers is :%f",result);
			break;
	
		case '/':
			
	         //function call
			result=division(a,b);
			printf("the division of the numbers is :%f",result);
			break;
		default: 
		     printf("\n Operator %c caught in main procssing unit, even if validation done ! Program concept faild.", ch); 
   }  
	
}

float addition(float a,float b)
{
	float sum;
	sum=a+b;
	return sum;
}


float multiplication(float a,float b)
{
	float mul;
	mul=a*b;
	return mul;
	
}

float subtraction(float a,float b)
{
	float sub;
	sub=a-b;
	return sub;
}
float division(float a,float b)
{
	float divs;
	divs=a/b;
	return divs;

	
}
int validate (float a,float b,char ch)
{ 
    
int flag=1;
  if(ch!='+'&&ch!='-'&&ch!='*'&&ch!='/')
  {
  	printf("invalid operator");
  	flag=0;
  }
  
  if(ch=='/'&&b==0)
  {
      printf("undefined");
      flag=0;
  }
  return flag;
}
	




