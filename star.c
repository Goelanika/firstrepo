#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=2;j--)
		{
			printf(" ");
	    }
		for(k=1;k<=2*(n-i+1)-1;k++)
		{
			printf("*");
		}
		printf("\n");
    }
		getch();
}
