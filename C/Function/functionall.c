#include<stdio.h>
int calculator();
int factoriaL();
void fibanocci();
float addition(float firstNumber,float secondNumber);
float multiplication(float firstNumber,float secondNumber);
float division(float firstNumber,float secondNumber);
float subtraction(float firstNumber ,float secondNumber);
int validateOption(int option);
int calculatorOperatorValidation(float firstNumber,float secondNumber,char ch);
int factorialFunction(int i,int a);
void fibonacciSeries(int range);
int validateZeroFact(int a);
//main function
void main()
{
	int option,isValidOption;
	printf("enter the option for the program \n 1.calculator \n 2.factorial\n 3.fibanocci \n");
	scanf("%d",&option);
	//option validation
	isValidOption=validateOption(option);
	if(isValidOption==1)
	{
    
		switch(option)
    	{ 
	  	case 1:
	   		calculator();//function call
	   		break;
	  	case 2:
	   		factorial();//function call
	   		break;
	  	case 3:
	   		fibanocci();//function call
	   		break;
	  	default:
	  	 	printf("option not found");
   	 	}
   }
}

//option validation definition
/**
 * The function to validate option of the calculator
 * @author Cyril K Joy
 * @param int option 
 * @return int flag
 */
int validateOption(int option)
{
	int flag=0;
	if(option<=3 && option>=1)
	{
		flag=1;
	}
	else 
	{
		printf("the selection out of option ");	
		
	}
	
	return flag;//return function
}

// end: validateoption


//calculator defintion

/**
 * The function to  calculator for two numbers
 * @author Cyril K Joy
 * @param float firstNumber 
 * @param float secondNumber
 * @param char ch
 * @return float isCalvalid
 */
int calculator()
{
	float firstNumber,secondNumber;
	char ch;
	int isCalValid;
	
	printf("enter the value for the intergers\n");
	scanf("%f %f",&firstNumber,&secondNumber);
	
	printf("enter your option to perform(+,-,*,/)\n");
	scanf(" %c",&ch);
	
	//calculator validation
	isCalValid=calculatorOperatorValidation(firstNumber,secondNumber,ch);
	if(isCalValid==1)
	{
		float result;

		switch(ch)
		{
			case '+':
				result=addition(firstNumber,secondNumber);//function call
				printf("the addition value is : %f",result);
				break;
			case '-':
				result=subtraction(firstNumber,secondNumber);//function call
				printf("the subtraction value is :%f",result);
				break;
			case '*':
				result=multiplication(firstNumber,secondNumber);//function call
				printf("the multiplication value is :%f",result);
				break;
			case '/':
				result=division(firstNumber,secondNumber);//function call
				printf("the division value is :%f",result);
				break;
			default:
				printf("the option you entered out of the arguements\n");
		}
  	}
}

/**
 * The function to add two numbers
 * @author Cyril K Joy
 * @param float firstNumber 
 * @param float secondNumber
 * @return float sum
 */
float addition(float firstNumber,float secondNumber)//function defintion for addition
{
	float sum;
	sum=firstNumber+secondNumber;
	return sum;
}
// end: function addition

/**
 * The function to multiplicate two numbers
 * @author Cyril K Joy
 * @param float firstNumber 
 * @param float secondNumber
 * @return float mul
 */

float multiplication(float firstNumber,float secondNumber)//function definition for multiplication
{
	float mul;
	mul=firstNumber*secondNumber;
	return mul;
	
}

// end: function multiplication

/**
 * The function to subtract two numbers
 * @author Cyril K Joy
 * @param float firstNumber 
 * @param float secondNumber
 * @return float sub
 */
float subtraction(float firstNumber,float secondNumber)
{
	float sub;
	sub=firstNumber-secondNumber;
	return sub;
}
// end: function subtraction

/**
 * The function to division two numbers
 * @author Cyril K Joy
 * @param float firstNumber 
 * @param float secondNumber
 * @return float divs
 */
float division(float firstNumber,float secondNumber)//function call for division
{
	float divs;
	divs=firstNumber/secondNumber;
	return divs;
}
// end: function division


/**
 * The function to validate calculator operation two numbers
 * @author Cyril K Joy
 * @param float firstNumber 
 * @param float secondNumber
 * @param char ch
 * @return float isCalvalid
 */
int calculatorOperatorValidation(float firstNumber,float secondNumber,char ch)//calculator switch validation
{
  int isCalValid=1;
  if(ch!='+'&&ch!='-'&&ch!='*'&&ch!='/')
  {
  	printf("invalid operator");
  	isCalValid=0;
  }
  
  else if(ch=='/'&&secondNumber==0)
  {
    printf("undefined");
    isCalValid=0;
  }
  return isCalValid;//return value
}
// end: calculator opration validation
 
 /**
 * The function to factorial of two numbers
 * @author Cyril K Joy
 * @param int i 
 * @param int fact
 * @param int a
 * @return float iszerofactvalid
 *@param iszerofactvalid
 */
int factorial()
{
 	int i,fact,a,isZerofactvalid=1;
	printf("enter the number");
	scanf("%d",&a);
	
	isZerofactvalid=validateZeroFact(a);
	fact=factorialFunction(i,a);
	if(isZerofactvalid==1)
	{
		printf("%d",fact);
	}
}
/**
 * The function to find the factorial 
 * @author Cyril K Joy
 * @param int i 
 * @param int a
 * @param char ch
 * @return int fact
 */
int factorialFunction(int i,int a)
{
	int fact=1;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;//return value
}
/**
 * The function to validate factorial zero
 * @author Cyril K Joy
 * @param int a 
 * @return int iszerofactvalid
 */
int validateZeroFact(int a)
{
  int isZerofactvalid=1;
  if(a==0)
  {
  	printf("the value cannot be zero");
	isZerofactvalid=0;
  }
 return isZerofactvalid;
}


// end: function factorial

///fibanocci 
/**
 * The function to find fibanocci of two numbers
 * @author Cyril K Joy
 * @param int range 
 */
void fibanocci()
{
   int range;
   printf("Enter range: ");
   scanf("%d", &range);
   printf("The fibonacci series is: \n");
   fibonacciSeries(range);
}
 
//fibanocci function definition
/**
 * The function to fibanocci series numbers
 * @author Cyril K Joy
 * @param int range 
 * @param int t1
 * @param int t2
 * @param int nextTerm
 */
void fibonacciSeries(int range)
 {
   int t1=0, t2=1, nextTerm;
   while (t1<=range)
   {
     nextTerm = t1+t2;
     t1 = t2;
     t2 = nextTerm;
     printf("%d\t",t1);
   }
 }
 
 // end: function fibanocci






