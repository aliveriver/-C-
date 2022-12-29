#include<stdio.h>
#include<math.h>
float distance(float x1,float y1,float x2,float y2)
{
	return sqrt(fabs(x1*x1+y1*y1-x2*x2-y2*y2));
}
int main()
{
	float x1,x2,y1,y2;
	scanf("%f",&x1);
	scanf("%f",&y1);
	scanf("%f",&x2);
	scanf("%f",&y2);
	printf("%f",distance(x1,y1,x2,y2));
	return 0;
}
