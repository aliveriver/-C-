#include<stdio.h>
int main(){
	int a,s,x,y;
	scanf("%d %d",&a,&s);
	y=1;
	for(x=s-1;x<s;x--){
		if(x&y==a){
			printf("%d %d\n",x,y);
		}
		y++;
	}
	return 0; 
}
