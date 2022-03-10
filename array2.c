//program to print the value of 2-D array by the taking value by user
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][5];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
}
for(i=0;i<2;i++)
{
	for(j=0;j<5;j++)
	{
		printf("%d\n",a[i][j]);
	}
	getch();
}
	
}
