#include<stdio.h>
int rest(int month,int day){
	int rest;
	switch(month)
	{
		case 12: rest=31-day;break;
		case 11: rest=30-day+31;break;
		case 10: rest=31-day+61;break;
		case 9: rest=30-day+91;break;
		case 8: rest=31-day+121;break;
		case 7: rest=31-day+152;break;
		case 6: rest=30-day+183;break;
		case 5: rest=31-day+213;break;
		case 4: rest=30-day+244;break;
		case 3: rest=31-day+274;break;
		case 2: rest=28-day+305;break;
		case 1: rest=31-day+305+28;break;
		return rest;
	}
}
int main(){
	int month1,month2,day1,day2;
	printf("put in month and day\n");
	scanf("%d%d",&month1,&day1);
	printf("还剩余%d天\n",rest(month1,day1));
	printf("put in other month and other day\n");
	scanf("%d%d",&month2,&day2);
	if(rest(month1,day1)-rest(month2,day2)>0)
	{
		printf("两天相差%d天\n",rest(month1,day1)-rest(month2,day2));
	}else
	{
		printf("两天相差%d天\n",rest(month2,day2)-rest(month1,day1));
	}
	return 0;
}
