#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,f,k,avg;
	printf ("Enter the value of 5 subject");
	scanf ("%d\n %d\n %d\n %d\n %d", &a,&b,&c,&d,&f);
	k=a+b+c+d+f;
	avg=k/500;
	printf ("%d\n%d",k,avg);
	getch();
}
