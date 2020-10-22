#include<stdio.h>
int main()
{
	int rows,col,numRows,numCol;
	
	// entering the values for the rows for the matrix 
	
	printf("enter the rows \n");
	scanf("%d",&numRows);
	//entering the values of the coloumn
	
	printf("enter the coloumn values\n");
	scanf("%d",&numCol);
	
	int a[numRows][numCol],b[numRows][numCol];
	
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
	
	
	for(rows=0;rows<numRows;rows++)
	{
		for(col=0;col<numCol;col++)
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
	
	for(rows=0;rows<numRows;rows++)
	{
		for(col=0;col<numCol;col++)
		{
			printf("\t %d",b[rows][col]);
     	}
		printf("\n");
	}
	printf("\n");
	
	//adding the two values
	int sum[numRows][numCol];
	
	for(rows=0;rows<numRows;rows++)
	{
		for(col=0;col<numCol;col++)
		{
			sum[rows][col]=a[rows][col]+b[rows][col];
		}
	}
	
	//printing the result
	printf("the added matrix is \n");
	
	
	
	
	for(rows=0;rows<numRows;rows++)
	{
		for(col=0;col<numCol;col++)
		{
			printf("\t %d", sum[rows][col]);
		}
		printf("\n");
	}
	
}
	
	
	
	

	

