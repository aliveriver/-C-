#include<stdio.h>
int main(){
	int a,c;
	printf("请输入三位整数\n");
	scanf("%d",&a);
	while(a!=0){
		c=a%10;
		printf("%c",c+48);
		a/=10;
	}
	return 0;
}
