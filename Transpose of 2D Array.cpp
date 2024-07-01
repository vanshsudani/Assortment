#include <stdio.h>
/*
Q.3 Transpose of 2D Array

Example:
Input:
Enter the array's row & column size: 3
Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

Output:
The transpose matrix of an array:
2 3 8
4 5 2
1 4 6
*/
main() 
{
    int r, c;
    printf("Enter the array's row & column size:- ");
    scanf("%d", &r);
    c=r;
    
    int a[r][c],i,j;

    for(i=0; i<r; i++) 
	{
        for(j=0; j<c; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n-----------------\n");
    
    printf("The transpose matrix of an array:-\n");
    
    for(j=0; j<c; j++)
    {
    	for(i=0; i<r; i++)
    	{
    		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
