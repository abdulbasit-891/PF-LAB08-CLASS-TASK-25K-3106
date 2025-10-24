#include <stdio.h>
int main()
{
	int i,j,max=0,rows,column;
	int matrix[3][4]=
	{
		{10,22,35,41},
		{50,65,73,80},
		{91,10,11,12}
	};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(matrix[i][j]>max)
			{
				max=matrix[i][j];
				rows=i;
				column=j;
			}
		}
	}
	printf("The maximum value is %d at index [%d,%d]",max,rows,column);
	return 0;
}
