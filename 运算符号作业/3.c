#include<stdio.h>
int main (){
	double T,t,hours,minutes;
	printf("������ʱ��__Сʱ__����\n");
	scanf("%lf%lf",&hours,&minutes);
	t=hours+minutes/60;
	T=4*t*t/(t+2)-20;
	printf("��ʱ�����¶�Ϊ%.2f",T);
	return 0;
}
