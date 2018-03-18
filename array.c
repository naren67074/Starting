#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,Sum;
	char ch;

	printf("Enter your choice a,b,c,d");
	scanf("%c",&ch);
	switch(ch)
	case 'a':
		printf("Enter the value of a=");
		scanf("%d",&a);
		printf("Enter the value of b=");
		scanf("%d",&b);
		Sum=a+b;
		printf("Sum is =%d",Sum);
	return 0;
}