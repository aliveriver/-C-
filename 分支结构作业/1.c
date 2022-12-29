#include<stdio.h>
int main(){
	int a,b,c;
	printf("putin three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a-b>0){
		if(a-c>0){
			printf("max=%d\n",a);
		}else{
			printf("max=%d",c);
		}
	}else{
		if(b-c>0){
			printf("max=%d",b);
		}else{
			printf("max=%d",c);
		}
	}
	return 0;
}
