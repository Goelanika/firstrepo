#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	printf("Enter any year");
	scanf("%d",&y);
	if(y%100!=0)
	printf("year is leap year");
	else
	printf("year is not leap year");
	getch();
	
}
