#include<stdio.h>
int main()
{
	const double dayscore=8.25;
	const int worktime=40;
	int time;
	double score;
	printf("请输入工作时间：\n");
	scanf("%d",&time);
	if(time>worktime)
	{
		score=worktime*dayscore+(time-worktime)*(dayscore*1.5);
	}
	else
	{
		score=dayscore*time;
	}
	printf("%f",score);
	return 0;
}
