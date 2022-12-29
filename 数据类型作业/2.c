#include<stdio.h>
int main(){
	double D,h,C;
	printf("请输入底面直径和高\n");
	scanf("%lf %lf",&D,&h);
	C=D*3.1415926;
	printf("底面周长为%.2f，圆柱体表面积为%.2f，圆柱体体积为%.2f",C,C*h+D*D/4*3.1415926,h*D*D/4*3.1415926);
	return 0;
}
