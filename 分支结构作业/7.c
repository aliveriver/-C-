#include<stdio.h>
#include<math.h>
int main (){
	int a,b,c;
	double s,sin,cos;
	printf("putin three 边\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
	{
		printf("能构成三角形\n");
		cos=(a*a+b*b-c*c)/(2.0*a*b);
		sin=sqrt(1-cos*cos);
		s=1/2.0*a*b*sin;
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
	{
		printf("构成直角三角形\n面积为%f\n",s);
	}else if(a==b&&b==c)
	{
		printf("构成等边三角形\n积为%f\n",s);
	}else
	{
		printf("构成普通三角形\n积为%f\n",s);
	}
	}else{
		printf("不能构成三角形\n");
	}
	return 0;
}
