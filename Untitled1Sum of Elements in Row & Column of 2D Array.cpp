#include<stdio.h>
/*

Input:
Enter the array's row size: 3
Enter the array's column size: 3
Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6


Output:
Enter row number: 0
Elements of row 0: 2, 7, 1
The sum of a row 0: 10
Enter column number: 2
Elements of column 2: 1, 4, 6
The sum of column 2: 11

*/
main()
{
	int r, c, choice;
	
	printf("Enter the array's row size = ");
	scanf("%d",&r);
	printf("Enter the array's column size = ");
	scanf("%d",&c);
	
	int i, j, array[r][c], row, column, sum=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\n----------------------------------\n");
	
	
	
	switch(choice)
	{
		case 0:
		{
			printf("Enter row number = ");
			scanf("%d",&row);
			printf("Elements of row %d= ",row);
			
			for(i=0;i<=r;i++)
			{
				printf("%d,",array[row][i]);
				sum += array[row][i];
			}
			printf("\nThe sum of a row %d= %d",row,sum);
			break;
		}
	}
	
	sum=0;
	
	switch(choice)
	{
		case 0:
		{
			printf("\n\nEnter column number = ");
			scanf("%d",&column);
			printf("Elements of column %d= ",column);
			
			for(j=0;j<c;j++)
			{
				printf("%d,",array[j][column]);
				sum += array[j][column];
			}
			printf("\nThe sum of a column %d= %d",column,sum);
			break;
		}
	}
}
