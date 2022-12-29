#include<stdio.h>
int a(int year)
{
	if(year%4==0&&year%100!=0||year%400==0) return 1;
	else return 0;
}
int b(int month,int day)
{
	int sum=0;
	switch(month-1)
	{
		case 1: sum=31; break;
		case 2: sum=59; break;
		case 3: sum=90; break;
		case 4: sum=120; break;
		case 5: sum=151; break;
		case 6: sum=181; break;
		case 7: sum=212; break;
		case 8: sum=243; break;
		case 9: sum=273; break;
		case 10: sum=304; break;
		case 11: sum=334; break;
		case 12: sum=365; break;
	}
	sum+=day;
	return sum;
}
int c(int month,int day)
{
	int sum=0;
	switch(month-1)
	{
		case 1: sum=31; break;
		case 2: sum=60; break;
		case 3: sum=91; break;
		case 4: sum=121; break;
		case 5: sum=152; break;
		case 6: sum=182; break;
		case 7: sum=213; break;
		case 8: sum=244; break;
		case 9: sum=274; break;
		case 10: sum=305; break;
		case 11: sum=335; break;
		case 12: sum=366; break;
	}
	sum+=day;
	return sum;
}
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(a(x))
	{
		printf("%d",b(y,z));
	}else
	{
		printf("%d",c(y,z));
	}
	return 0;
}
