#include<stdio.h>
#define Height 10
int main(){
int a;
int b;
int tiji;
printf("�����볤�Ϳ�����\"5 4\"��ʾ��5��4\n");
scanf("%d %d",&a,&b);
tiji = JISHUAN(a,b);
printf("�����ε����Ϊ:%d",tiji);

return 0;
}
int JISHUAN (int x,int y){
int tiji =x*y*Height;
return (tiji);
}
