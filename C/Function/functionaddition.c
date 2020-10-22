#include<stdio.h>

//****************************************************addition using the switch case and the functions****************//

//function prototype


int addition(int a,int b);
float multiplication(float a,float b);
int  subtraction(int a,int b);
float division(float a,float b);

void main()
{
	int a,b,result;
	char ch;
	
	//getting the a value
	
	
	printf("enter the value for a:\n");
	scanf("%d",&a);
	
	//getting the b value
	
	printf("enter the value for b:\n");
	scanf("%d",&b);
	
	
	//selecting the option
	
	printf("enter your option (+,-,*,/): ");
	scanf(" %c",&ch);

	switch(ch)
	{
		case '+':
			addition(a,b);         //function call   
			result=addition(a,b);  
			printf(" the addition of the numbers is :%d",result);
			break;
			
		case '-':
			subtraction(a,b);       //function call
			result=subtraction(a,b);
			printf(" the subtraction of the numbers is :%d",result);
			break;
		
		case '*':
			
			multiplication(a,b);      //function call
			result=multiplication(a,b);
			printf("the multiplication of the numbers is :%f",result);
			break;
	
		case '/':
			
			division(a,b);          //function call
			result=division(a,b);
			printf("the division of the numbers is :%f",result);
			break;

				
	}
	
	
	
}

//function declaration

int addition(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}


float multiplication(float a,float b)
{
	float mul;
	mul=a*b;
	return mul;
	
}

int subtraction(int a,int b)
{
	int sub;
	sub=a-b;
	return sub;
}
float division(float a,float b)
{
	float divs;
	divs=a/b;
	return divs;
	
}



