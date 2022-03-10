#include<stdio.h>
#include<conio.h>
void main()
{
	//0 1 1 2 3 6 11 20...N
	int a=0,b=1,c,n,i;
	printf("Enter no of terms");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}
