#include<stdio.h>
#include<math.h>
int main (){
	int a,b,c;
	double s,sin,cos;
	printf("putin three ��\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
	{
		printf("�ܹ���������\n");
		cos=(a*a+b*b-c*c)/(2.0*a*b);
		sin=sqrt(1-cos*cos);
		s=1/2.0*a*b*sin;
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
	{
		printf("����ֱ��������\n���Ϊ%f\n",s);
	}else if(a==b&&b==c)
	{
		printf("���ɵȱ�������\n��Ϊ%f\n",s);
	}else
	{
		printf("������ͨ������\n��Ϊ%f\n",s);
	}
	}else{
		printf("���ܹ���������\n");
	}
	return 0;
}
