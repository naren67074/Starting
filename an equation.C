#include<stdio.h>
#include<conio.h>
int main()
{
	int Z,a,b,c,q,r,m;
	/*("Z=8.8*(a+b)*2/c-0.5+2*a/(q+r)/(a+b)*(1/m)"\n\n);*/
	
	printf("Enter the value of a=\n");
	scanf("%d",&a);
	printf("Enter the value of b=\n");
	scanf("%d",&b);
	printf("Enter the value of c=\n");
	scanf("%d",&c);
	printf("Enter the value of q=\n");
	scanf("%d",&q);
	printf("Enter the value of r=\n");
	scanf("%d",&r);
	printf("Enter the value of m=\n");
	scanf("%d",&m);
	Z=8.8*(a+b)*2/c-0.5+2*a/(q+r)/(a+b)*(1/m);
	printf("This the result Z=%d",Z);
	getch();
}
