#include<stdio.h>
int main(){
	int x;//x����������� 
	double year,month,day;
	out:
	printf("putin year month day\n");
	scanf("%lf%lf%lf",&year,&month,&day);
	
	//�ж������Ƿ�Ϊ������ 
	if(year/(int)year!=1){ 
		printf("����������\n");
		goto out;
	}
	//�ж����� 
	if((int)year%4==0&&(int)year%100!=0||(int)year%400==0){
		x=1;
	}else{
		x=0;
	}
	//�ж������Ƿ�Ϊ������ 
	if(month-(int)month>0){
		printf("�·��������\n");
		goto out;
	}
	if(day-(int)day>0){
		printf("�����������\n");
		goto out;
	}
	//�ж��·ݺ����� 
	if(month<1||month>12){
		printf("�·��������\n");
		goto out;
	} 
	//�ж����ں����� 
	if(x=1){
		if((int)month==1||(int)month==3||(int)month==5||(int)month==7||(int)month==8||(int)month==10||(int)month==12)  //1��3��5��7��8��10������һ�������� 
		{
			if(day<1&&day>31)
			{
				printf("�����������\n");
				goto out;
			}
		}else if((int)month==4||(int)month==6||(int)month==9||(int)month==11)
		{
			if(day<1&&day>30)
			{
				printf("�����������\n");
				goto out;
			}
		}else if((int)month==2)
		{
			if(day<1&&day>29)
			{
				printf("�����������\n");
				goto out;
			}
		}
	}else if((int)month==1||(int)month==3||(int)month==5||(int)month==7||(int)month==8||(int)month==10||(int)month==12)  //1��3��5��7��8��10������һ�������� 
		{
			if(day<1&&day>31)
			{
				printf("�����������\n");
				goto out;
			}
		}else if((int)month==4||(int)month==6||(int)month==9||(int)month==11)
		{
			if(day<1&&day>30)
			{
				printf("�����������\n");
				goto out;
			}
		}else if((int)month==2)
		{
			if(day<1&&day>28)
			{
				printf("�����������\n");
				goto out;
			}
		}
		printf("������Ч\n");
		return 0;
}
