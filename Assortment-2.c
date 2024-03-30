#include<stdio.h>

main()
{
	// Write a Program to find the largest element from a given 2D array.
	
	int r,c,i,j,largest;
	
	printf("enter number of row of array=");
	scanf("%d",&r);
	
	printf("enter number of column of array=");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("enter array element=\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		    printf("a[%d][%d]",i,j);
		    scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		    if(a[i][j] > largest)
			{
				largest = a[i][j];
			}	
		}
	}
	
	printf("The largest element is=%d\n",largest);
	
}