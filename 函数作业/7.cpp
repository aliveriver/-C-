#include<stdio.h>
#include<math.h>
int a,b,c,d;
double y(double x)
{
	return a*x*x*x+b*x*x+c*x+d;
}
double z(double x)
{
	return 3*a*x*x+b*2*x+c;
}
double q(double x)
{
	if(fabs(y(x))<=1e-6) return x;
	q(x-y(x)/z(x));
}
int main()
{
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%f",q(1));
	return 0;
}
