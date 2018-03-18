#include<stdio.h>
#include<conio.h>
int main()
{
	int i,x;
	printf("Print 1 for know value of x\nPrint 2 For say hello\nPrint 3 For know my name\nDo you want to know my last name say 4\n");
	printf("Enter value of Case=");
	scanf("%d", &i);
	switch(i)
	{
		case 1:
			x=5;
			x=10;
			printf("x=%d\n",x);
			return 0;
		case 2:
			printf("hello");
		case 3:
			printf("My name is Narendra");
		case 4:
			printf("My Last Name Saini is");
		break;
	}
	getch();
}
