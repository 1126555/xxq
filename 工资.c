#include <stdio.h>
int main()
{
    int year,sal=5000,bon=300;
    printf("�������Ա���Ĺ��䣺\n");
    scanf("%d",&year);
    if (year>5)
        {
        printf("��Ա���Ĺ���Ϊ��%d",sal+bon+2*bon);
        }
        else
        {
        printf("��Ա���Ĺ���Ϊ��%d",sal+bon);
        }
return 0;
}
