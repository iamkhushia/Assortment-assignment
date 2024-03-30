#include<stdio.h>

main()
{
	// Write a Program to find all the negative elements from a given 1D array.
	
	int i,size,a[100];
	
	printf("enetr the size of array=\n");
	scanf("%d",&size);
	
	printf("enter the array element=\n");
	
	for(i=0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Negative elements from an Array=\n");
	
	for(i=0; i<size; i++)
	{
		if(a[i]<0)
		{
			printf("%d\n",a[i]);
		}
	}
}