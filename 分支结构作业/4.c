#include<stdio.h>
int main(){
	printf("请输入百分之成绩\n");
	int a;
	scanf("%d",&a);
	switch(a/5)
	{
		case 20:
		case 19:
		case 18: 
		case 17: printf("A level\n");break;
		case 16: 
		case 15: 
		case 14: printf("B level\n");break;
		case 13: 
		case 12: printf("C level\n");break;
		default: printf("D level\n");
	}
	return 0;
}
