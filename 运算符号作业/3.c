#include<stdio.h>
int main (){
	double T,t,hours,minutes;
	printf("请输入时间__小时__分钟\n");
	scanf("%lf%lf",&hours,&minutes);
	t=hours+minutes/60;
	T=4*t*t/(t+2)-20;
	printf("此时冰箱温度为%.2f",T);
	return 0;
}
