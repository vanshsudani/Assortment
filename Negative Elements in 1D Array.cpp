#include <stdio.h>
/*
Q.1 Negative Elements in 1D Array

Example:
Input:
Enter the array's size: 5
Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5

Output:
Negative elements from an Array: -4, -3, -5
*/
main()
{
	int n;
	
	printf("enter array's size:- ");
	scanf("%d",&n);
	
	int a[n],r;
	
	for(r=0;r<n;r++)
	{
		printf("a[%d] =",r);
		scanf("%d",&a[r]);
	}
	
	printf("Negative elements from an Array:-");
	
	for(r=0;r<n;r++)
	{	
		if(0>a[r])
		{
			printf("%d,",a[r]);
		}
	}
}