#include<stdio.h>
int main(){
	double F,C;
	printf("请输入需要转换的华氏温度\n");
	scanf("%lf",&F);
	C=5*(F-32)/9;
	printf("该华氏温度转换为摄氏温度为%.4f",C);
	return 0;
}
