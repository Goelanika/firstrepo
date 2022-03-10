#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	if(age>=18)
	printf("you are eligible for vote");
	else
	printf("you are not eligible for vote");
	getch();
}
