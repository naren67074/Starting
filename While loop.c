#include<stdio.h>
int main()
{
	int p,n;
	int count = 1;
	float r,si;
	
	
	while(count<=3){
		
		
		printf("Enter values of p,n and r\n");
		scanf("%d %d %f", &p, &n, &r);
		si=p*n*r/100;
		printf("\nSimple Interest=Rs.%f\n",si);
	}
	return 0;
}
