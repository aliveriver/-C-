#include<stdio.h>
int main(){
	int a,c;
	printf("��������λ����\n");
	scanf("%d",&a);
	while(a!=0){
		c=a%10;
		printf("%c",c+48);
		a/=10;
	}
	return 0;
}
