#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2];
	int i,j;
	printf("Enter the values of array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d\n",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
	getch();
}
