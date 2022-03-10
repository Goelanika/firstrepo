#include<stdio.h>
#include<conio.h>
void main()
{
    //0 1 2 3 6 11 20...N
	int a=0,b=1,c=2,d,n,i;
	printf("Enter no of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a);
		d=a+b+c;                                                                                   
		a=b;
		b=c;
		c=d;
	}
	getch();
}
