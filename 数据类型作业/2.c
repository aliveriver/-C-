#include<stdio.h>
int main(){
	double D,h,C;
	printf("���������ֱ���͸�\n");
	scanf("%lf %lf",&D,&h);
	C=D*3.1415926;
	printf("�����ܳ�Ϊ%.2f��Բ��������Ϊ%.2f��Բ�������Ϊ%.2f",C,C*h+D*D/4*3.1415926,h*D*D/4*3.1415926);
	return 0;
}
