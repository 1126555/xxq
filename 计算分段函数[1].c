#include<stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	if(x==0)
	{
		printf("f(%f) = %f",x,x);
	}
	else
	{
		printf("f(%f) = %f",x,1/x);
	}
	return 0;
}
