#include<stdio.h>
int main()
{
	const int PASS=60;
	int chengji;
	scanf("%d",&chengji);
	if(chengji>PASS)
	{
		printf("恭喜你及格了！\n"); 
	}
	else
	{
		printf("很遗憾，你没有及格！\n"); 
	}
	printf("再见！"); 
	return 0;
 } 
