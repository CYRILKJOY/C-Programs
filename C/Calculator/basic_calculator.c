#include<stdio.h>
int main()
{
	int firstNumber,secondNumber,result;
	char operator;
	
	
	//*****************************CALCULATOR**************
	
    //getting the values for the operation:
    
    printf("enter the first value for the operation:\n");
    scanf("%d",&firstNumber);
    printf("\n");
    
    //getting the second value for the operation:
    
    
    printf("enter the second value for the operation:\n");
    scanf("%d",&secondNumber);
    printf("\n");
    
    
    //choosing the oprand:
   
    printf("Enter an operator (+, -, *): \n");
    scanf("%s", &operator);
    
    //switch case for the opearation
    
    result=0;
    switch (operator)
    {
    	case '+':
    		
    		result=firstNumber+secondNumber;
    		printf("%d",result);
    		break;
    		
    		
    	case '-':
    		
    		result=firstNumber-secondNumber;
    		printf("%d",result);
    		break;
    		
    		
    	case '*':
    		
    		result=firstNumber*secondNumber;
    		printf("%d",result);
    		break;
    		
    		
    	case '/':
    		
    		result=firstNumber/secondNumber;
    		printf("%d",result);
    		break;
    		
    	default:
        printf("Error! operator is not correct");
    		
	}
	return 0;
 
}
