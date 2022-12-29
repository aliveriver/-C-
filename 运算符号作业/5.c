#include<stdio.h>
int main(){
	int X1,X2;
	int h1,h2,m1,m2,s1,s2;
	int T,X;
	double speed; 
	printf("请输入上路时的里程\n");
	scanf("%d",&X1);
	printf("请输入上路时间（时:分:秒）\n");
	scanf("%d:%d:%d",&h1,&m1,&s1);
	printf("请输入下路时的里程\n");
	scanf("%d",&X2);
	printf("请输入下路时间（时:分:秒）\n");
	scanf("%d:%d:%d",&h2,&m2,&s2);
	T=(h2*3600+m2*60+s2)-(h1*3600+m1*60+s1);
	X=X2-X1;
	speed=(X*3600.0)/T;
	printf("汽车行驶%d公里\n",X);
	printf("耗时%d时%d分%d秒",T/3600,T%3600/60,T%3600%60);
	printf("平均速度为%lf公里/每小时",speed);
	return 0;
}
