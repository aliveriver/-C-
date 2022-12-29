#include<stdio.h>
#include<time.h>
struct time{
	int year,month,day;
};
int main()
{
	struct time t;
	scanf("%d%d%d",&t.year,&t.month,&t.day);
	int ans=0,x;
	if(t.month>12||t.month<1)
	{
		printf("输入日期不合法\n");
		return 0;
	}
	switch(t.month)
	{
		case 1: if(t.day>31||t.day<1) 
		{
			printf("输入日期不合法\n");
			return 0;
		}break;
		case 2: if(t.year%4==0&&t.year%100!=0||t.year%400==0) 
		{
			x=1;
			if(t.day>29||t.day<1)
			{
				printf("输入日期不合法\n");
				return 0;
			}
			break;
		}else
		{
			x=0;
			if(t.day>28||t.day<1)
			{
				printf("输入日期不合法\n");
				return 0;
			}
			break;
		}
		case 3:	if(t.day>31||t.day<1) 
		{
			printf("输入日期不合法\n");
			return 0;
		}break;
		case 4:	if(t.day>30||t.day<1)
		{
			printf("输入日期不合法\n");
			return 0;
		}break;
		case 5:	if(t.day>31||t.day<1)
		{
			printf("输入日期不合法\n");
			return 0;
		}break;
		case 6:	if(t.day>30||t.day<1) 
		{
			printf("输入日期不合法\n");
			return 0;
		}break;
		case 7:	if(t.day>31||t.day<1) 
		{
			printf("输入日期不合法\n");
			return 0;
		}break;
		case 8:	if(t.day>31||t.day<1) 
		{
			printf("输入日期不合法\n");
			return 0;
		}break;
		case 9:	if(t.day>30||t.day<1) 
		{
			printf("输入日期不合法\n");
			return 0;
		}break;
		case 10: if(t.day>31||t.day<1) 
		{
			printf("输入日期不合法\n");
			return 0;
		}break;
		case 11: if(t.day>30||t.day<1) 
		{
			printf("输入日期不合法\n");
			return 0;
		}break;
		case 12: if(t.day>31||t.day<1) 
		{
			printf("输入日期不合法\n");
			return 0;
		}break;	
	}
	if(t.year>2015)
	{
		if(x=1)
		{
			switch(t.month-1)
			{
				case 0:ans=0;break;
				case 1: ans=31;break;
				case 2: ans=29+31;break;
				case 3:	ans=29+31+31;break;
				case 4:	ans=29+31+31+30;break;
				case 5:	ans=29+31+31+30+31;break;
				case 6:	ans=29+31+31+30+31+30;break;
				case 7:	ans=29+31+31+30+31+30+31;break;
				case 8:	ans=29+31+31+30+31+30+31+31;break;
				case 9:	ans=29+31+31+30+31+30+31+31+30;break;
				case 10: ans=29+31+31+30+31+30+31+31+30+31;break;
				case 11: ans=29+31+31+30+31+30+31+31+30+31+30;break;
			}
			ans+=t.day;
		}
		else
		{
			switch(t.month-1)
			{
				case 1: ans=31;break;
				case 2: ans=28+31;break;
				case 3:	ans=28+31+31;break;
				case 4:	ans=28+31+31+30;break;
				case 5:	ans=28+31+31+30+31;break;
				case 6:	ans=28+31+31+30+31+30;break;
				case 7:	ans=28+31+31+30+31+30+31;break;
				case 8:	ans=28+31+31+30+31+30+31+31;break;
				case 9:	ans=28+31+31+30+31+30+31+31+30;break;
				case 10: ans=28+31+31+30+31+30+31+31+30+31;break;
				case 11: ans=28+31+31+30+31+30+31+31+30+31+30;break;
				case 12: ans=28+31+31+30+31+30+31+31+30+31+30+31;break;
				default: ans=0;
			}
			ans+=t.day;
		}
		for(int i=t.year-1;i>=2015;i--)
		{
			if(i%4==0&&i%100!=0||i%400==0) 
			{
				ans+=366;
			}else
			{
				ans+=365;
			}
		}
	}
	else if(t.year==2015)
	{
		switch(t.month-1)
		{
			case 1: ans=31;break;
			case 2: ans=28+31;break;
			case 3:	ans=28+31+31;break;
			case 4:	ans=28+31+31+30;break;
			case 5:	ans=28+31+31+30+31;break;
			case 6:	ans=28+31+31+30+31+30;break;
			case 7:	ans=28+31+31+30+31+30+31;break;
			case 8:	ans=28+31+31+30+31+30+31+31;break;
			case 9:	ans=28+31+31+30+31+30+31+31+30;break;
			case 10: ans=28+31+31+30+31+30+31+31+30+31;break;
			case 11: ans=28+31+31+30+31+30+31+31+30+31+30;break;
			case 12: ans=28+31+31+30+31+30+31+31+30+31+30+31;break;
			default: ans=0;
		}
		ans+=t.day;
	}
	else
	{
		if(x=1)
		{
			switch(t.month+1)
			{
				case 2: ans=366-(31);ans+=(31-t.day);break;
				case 3: ans=366-(29+31);ans+=(29-t.day);break;
				case 4:	ans=366-(29+31+31);ans+=(31-t.day);break;
				case 5:	ans=366-(29+31+31+30);ans+=(30-t.day);break;
				case 6:	ans=366-(29+31+31+30+31);ans+=(31-t.day);break;
				case 7:	ans=366-(29+31+31+30+31+30);ans+=(30-t.day);break;
				case 8:	ans=366-(29+31+31+30+31+30+31);ans+=(31-t.day);break;
				case 9:	ans=366-(29+31+31+30+31+30+31+31);ans+=(31-t.day);break;
				case 10: ans=366-(29+31+31+30+31+30+31+31+30);ans+=(30-t.day);break;
				case 11: ans=366-(29+31+31+30+31+30+31+31+30+31);ans+=(31-t.day);break;
				case 12: ans=366-(29+31+31+30+31+30+31+31+30+31+30);ans+=(30-t.day);break;
				case 13: ans=366-(29+31+31+30+31+30+31+31+30+31+30+31);ans+=(31-t.day);;break;
			}
		}
		else
		{
			switch(t.month-1)
			{
				case 2: ans=365-(31);ans+=(31-t.day);break;
				case 3: ans=365-(28+31);ans+=(28-t.day);break;
				case 4:	ans=365-(28+31+31);ans+=(31-t.day);break;
				case 5:	ans=365-(28+31+31+30);ans+=(30-t.day);break;
				case 6:	ans=365-(28+31+31+30+31);ans+=(31-t.day);break;
				case 7:	ans=365-(28+31+31+30+31+30);ans+=(30-t.day);break;
				case 8:	ans=365-(28+31+31+30+31+30+31);ans+=(31-t.day);break;
				case 9:	ans=365-(28+31+31+30+31+30+31+31);ans+=(31-t.day);break;
				case 10: ans=365-(28+31+31+30+31+30+31+31+30);ans+=(30-t.day);break;
				case 11: ans=365-(28+31+31+30+31+30+31+31+30+31);ans+=(31-t.day);break;
				case 12: ans=365-(28+31+31+30+31+30+31+31+30+31+30);ans+=(30-t.day);break;
				case 13: ans=365-(28+31+31+30+31+30+31+31+30+31+30+31);ans+=(31-t.day);;break;
			}
		}
		for(int i=t.year+11;i<2015;i++)
		{
			if(i%4==0&&i%100!=0||i%400==0) 
			{
				ans+=366;
			}else
			{
				ans+=365;
			}
		}
	}
	printf("距离2015年1月1日还有%d天\n",ans-1);
	return 0;
}
