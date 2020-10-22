#include<stdio.h>
int main()
{
	int row,col,numRows,numCol,numRowsMat,numColMat,numColMatSum,numRowsMatSum;
	
	//printing the rows and the coloumns limit
	
	printf("enter the limits for the row and the coloumns for the matrix a: \n");
	scanf("%d \n %d",&numRows,&numCol);
	
	printf("enter the limits for the row and the coloumns for the matrix b: \n");
	scanf("%d \n %d",&numRowsMat,&numColMat);
	
	
	int a[numRows][numCol],b[numRowsMat][numColMat];
	
	
	// getting the values into the matrix
	
	
	
	//matrix 1:
	
	
	printf("enter the matrix 1:\n");
	row=0;
	while(row<numRows)
	{
		col=0;
		while(col<numCol)
		{
			scanf("%d",&a[row][col]);
			col++;
		}
		row++;	
	}
	printf("\n");
	
	
	//matrix 2:
	
	printf("enter the matrix 2:\n");
	row=0;
	while(row<numRowsMat)
	{
		col=0;
		while(col<numColMat)
		{
			scanf("%d",&b[row][col]);
			col++;
		}
		row++;
	}
	printf("\n");
	
	
	
	//printing a
	
	printf("the matrix 1 is: \n");
	
	row=0;
	while(row<numRowsMat)
	{
		col=0;
		while(col<numColMat)
		{
			printf(" \t%d",a[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}
	printf("\n");
	
	
	// printing b
	
	printf("the matrix 2 is: \n");
	row=0;
	while(row<numRowsMat)
	{
		col=0;
		while(col<numColMat)
		{
			printf("\t%d",b[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}
	printf("\n");
	
	
	//adding the matrix:
	
	int sum[numRowsMat][numColMat];
	row=0;
	while(row<numRowsMat)
	{
		col=0;
		while(col<numColMat)
		{
			sum[row][col]=a[row][col]+b[row][col];
			col++;
		}
		printf("\n");
		row++;
	}
	printf("\n");
	
	
	//printing the matrix
	
	printf("the matrix addition is:\n");
	
	row=0;
	while(row<numRows)
	{
		col=0;
		while(col<numColMat)
		{
			printf("\t%d",sum[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}
	printf("\n");
	
	
}
