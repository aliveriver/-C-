#include<stdio.h>
int main(){
	int x;//x代表闰年与否 
	double year,month,day;
	out:
	printf("putin year month day\n");
	scanf("%lf%lf%lf",&year,&month,&day);
	
	//判断输入是否为正整数 
	if(year/(int)year!=1){ 
		printf("年份输入错误\n");
		goto out;
	}
	//判断闰年 
	if((int)year%4==0&&(int)year%100!=0||(int)year%400==0){
		x=1;
	}else{
		x=0;
	}
	//判断输入是否为正整数 
	if(month-(int)month>0){
		printf("月份输入错误\n");
		goto out;
	}
	if(day-(int)day>0){
		printf("日期输入错误\n");
		goto out;
	}
	//判断月份合理性 
	if(month<1||month>12){
		printf("月份输入错误\n");
		goto out;
	} 
	//判断日期合理性 
	if(x=1){
		if((int)month==1||(int)month==3||(int)month==5||(int)month==7||(int)month==8||(int)month==10||(int)month==12)  //1、3、5、7、8、10、腊三一天永不差 
		{
			if(day<1&&day>31)
			{
				printf("日期输入错误\n");
				goto out;
			}
		}else if((int)month==4||(int)month==6||(int)month==9||(int)month==11)
		{
			if(day<1&&day>30)
			{
				printf("日期输入错误\n");
				goto out;
			}
		}else if((int)month==2)
		{
			if(day<1&&day>29)
			{
				printf("日期输入错误\n");
				goto out;
			}
		}
	}else if((int)month==1||(int)month==3||(int)month==5||(int)month==7||(int)month==8||(int)month==10||(int)month==12)  //1、3、5、7、8、10、腊三一天永不差 
		{
			if(day<1&&day>31)
			{
				printf("日期输入错误\n");
				goto out;
			}
		}else if((int)month==4||(int)month==6||(int)month==9||(int)month==11)
		{
			if(day<1&&day>30)
			{
				printf("日期输入错误\n");
				goto out;
			}
		}else if((int)month==2)
		{
			if(day<1&&day>28)
			{
				printf("日期输入错误\n");
				goto out;
			}
		}
		printf("日期有效\n");
		return 0;
}
