#include<stdio.h>
int MAX(int x,int y)
{
	int z;
	if(x>y)
	{
		z=x;
	}
	else
	{
		z=y;
	}
	return (z);
}
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c= MAX(a,b);
	printf("%d",c);
	return 0;
}
