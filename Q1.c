#include <stdio.h>
int main()
{
	int num,i,j,table=0;
	printf("MULTIPLICATION TABLE\n");
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d:\t",i);
		for(j=1;j<=10;j++)
		{
			table=i*j;
			printf("%4d",table);
		}
		printf("\n");
	}
}
