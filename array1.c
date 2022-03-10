//program to print the values reverse of an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6],i;
	printf("Enter the elements of an array");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=5;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
