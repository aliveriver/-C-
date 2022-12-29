#include<stdio.h>
int main(){
	double h,d;
	printf("请输入三角形的底和高\n");
	scanf("%lf%lf",&d,&h);
	printf("三角形面积为%f\n",d*h/2);
	return 0;
}
