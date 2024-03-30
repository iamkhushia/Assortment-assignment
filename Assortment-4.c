#include<stdio.h>

main()
{
	// Write a Program to print and find the sum of all elements of a given row & column from a 2D array
	
	int i,j,r,c,r_sum=0,c_sum=0,row,column;
	
	printf("enter number of row of array=");
	scanf("%d",&r);
	
	printf("enter number of column of array=");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("enter the element=\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the row number=");
	scanf("%d",&row);
	
	printf("element of row %d =",row);
	
	for(j=0; j<c; j++)
	{
		printf("%d",a[row][j]);
		r_sum = r_sum + a[row][j];
	}
	printf("The sum of a row %d =%d\n",row,r_sum);
	
	printf("enter the column number=");
	scanf("%d",&column);
	
	printf("element of column %d =",column);
	for(i=0; i<r; i++)
	{
	    printf("%d",a[i][column]);
		c_sum = c_sum + a[i][column];
	}
	printf("The sum of a column =%d\n",c_sum);
}