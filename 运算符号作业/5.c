#include<stdio.h>
int main(){
	int X1,X2;
	int h1,h2,m1,m2,s1,s2;
	int T,X;
	double speed; 
	printf("��������·ʱ�����\n");
	scanf("%d",&X1);
	printf("��������·ʱ�䣨ʱ:��:�룩\n");
	scanf("%d:%d:%d",&h1,&m1,&s1);
	printf("��������·ʱ�����\n");
	scanf("%d",&X2);
	printf("��������·ʱ�䣨ʱ:��:�룩\n");
	scanf("%d:%d:%d",&h2,&m2,&s2);
	T=(h2*3600+m2*60+s2)-(h1*3600+m1*60+s1);
	X=X2-X1;
	speed=(X*3600.0)/T;
	printf("������ʻ%d����\n",X);
	printf("��ʱ%dʱ%d��%d��",T/3600,T%3600/60,T%3600%60);
	printf("ƽ���ٶ�Ϊ%lf����/ÿСʱ",speed);
	return 0;
}
