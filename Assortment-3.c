#include<stdio.h>

main()
{
	//Write a Program to find the transpose matrix of a given 2D array.
	
	int i,j,r,c;
	 
	printf("enter number of row of array=");
	scanf("%d",&r);
	
	printf("enter number of column of array=");
	scanf("%d",&c);
	
	int a[r][c],b[r][c];
	
	printf("enter element of array=\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		    b[j][i] = a[i][j];	
		}
	}
	printf("The transpose matrix of an array=\n");
	
	for(i=0; i<c; i++)
	{
		for(j=0; j<r; j++)
		{
		    printf("%d\t",b[i][j]);	
		}
		printf("\n\n");
	}
}