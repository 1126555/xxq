#include<stdio.h>
#define Height 10
int main(){
int a;
int b;
int tiji;
printf("请输入长和宽：例如\"5 4\"表示长5宽4\n");
scanf("%d %d",&a,&b);
tiji = JISHUAN(a,b);
printf("长方形的体积为:%d",tiji);

return 0;
}
int JISHUAN (int x,int y){
int tiji =x*y*Height;
return (tiji);
}
