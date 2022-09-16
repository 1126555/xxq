#include <stdio.h>
int main()
{
    int year,sal=5000,bon=300;
    printf("请输入该员工的工龄：\n");
    scanf("%d",&year);
    if (year>5)
        {
        printf("该员工的工资为：%d",sal+bon+2*bon);
        }
        else
        {
        printf("该员工的工资为：%d",sal+bon);
        }
return 0;
}
