#include<stdio.h>
int main(){
	int hour1,hour2,minute1,minute2,T,t1,t2;
	printf("����������ʱ���.���磺9 40\n21 55\n");
	scanf("%d%d",&hour1,&minute1);
	scanf("%d%d",&hour2,&minute2);
	t1=hour1*60+minute1;
	t2=hour2*60+minute2;
	T=t2-t1;
	if(T<0){
		T=-T;
	}
	printf("����ʱ������%dʱ%d��\n",T/60,T%60);
	return 0;
}
