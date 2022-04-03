#include<stdio.h>
 int main()
{
    int i, j, rows, columns, a[10][10];
    printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
	 printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
  	printf("\n lower triangular matrix is:");
     for(rows = 0; rows < i; rows++)
  	{
  		printf("\n");
   		for(columns = 0; columns < j; columns++)
    	{
    		if(rows >= columns)
    		{
    			printf("%d ", a[rows][columns]);
			}
			else
			{
				printf("0 ");
			}
   	 	}
  	}
  	printf("\n upper triangular matrix is :");
  	for(rows = 0; rows < i; rows++)
  	{
  		printf("\n");
   		for(columns = 0; columns < j; columns++)
    	{
    		if(columns >= rows)
    		{
    			printf("%d ", a[rows][columns]);
			}
			else
			{
				printf("0 ");
			}
   	 	}
  	}
  	
 	return 0;
}
