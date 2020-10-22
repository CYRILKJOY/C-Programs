#include<stdio.h>
int main()
{
	int rows,col,numRows1,numCol1,numRows,numCol,k;
	
	// entering the values for the rows for the matrix a: 
	
	printf("enter the rows \n");
	scanf("%d",&numRows);
	printf("enter the coloumn values\n");
	scanf("%d",&numCol);
	
	
	//entering the values for the matrix b:
	
	printf("enter the rows \n");
	scanf("%d",&numRows1);
	printf("enter the coloumn values\n");
	scanf("%d",&numCol1);
	
	int a[numRows][numCol],b[numRows1][numCol1],mul[rows][col];
	
	//for the values of a
	
	printf("enter the values for a: \n");
	
	for(rows=0;rows<numRows;rows++)
	{
		for(col=0;col<numCol;col++)
		{
			scanf("%d",&a[rows][col]);
	    }
		printf("\n");
	}
	
	//for the values of b
	
	printf("enter the values for b: \n");
	
	
	for(rows=0;rows<numRows1;rows++)
	{
		for(col=0;col<numCol1;col++)
		{
			scanf("%d",&b[rows][col]);
     	}
		printf("\n");
	}
	
	//printing the values of a
	printf("the matrix a:\n");
	
		for(rows=0;rows<numRows;rows++)
	{
		for(col=0;col<numCol;col++)
		{
			printf("\t %d",a[rows][col]);
     	}
		printf("\n");
	}
	printf("\n");
	
	
	//printing the values of b
	
	printf("the matrix b:\n");
	
	for(rows=0;rows<numRows1;rows++)
	{
		for(col=0;col<numCol1;col++)
		{
			printf("\t %d",b[rows][col]);
     	}
		printf("\n");
	}
	printf("\n");
	
	
	//multiplication
	
	
	mul[rows][col]=0;
	for(rows=0;rows<numRows;rows++)
	{
		for(col=0;col<numCol1;col++)
		{
			for(k=0;k<numRows1;k++)
			{
				mul[rows][col]=mul[rows][col]+a[rows][k]*b[k][col];
     	    }
     	}
    }
    //printing multiplication
    
    
    for(rows=0;rows<numRows;rows++)
    {
    	for(col=0;col<numCol1;col++)
    	{
    		printf("\t %d",mul[rows][col]);
		}
		printf("\n");
	}
}
	
	
	
