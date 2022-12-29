#include<stdio.h>
int main(){
	printf("put in a char\n");
	char ch='0';
	while(ch!='#')
	{
	scanf("%c",&ch);
	getchar();
	if(ch>='0'&&ch<='9')
	{
		printf("char is number\n");
	}else if(ch>='A'&&ch<='Z')
	{
		printf("char is capital letter\n");
	}else if(ch>='a'&&ch<='z')
	{
		printf("char is lowercase\n");
	}else
	{
		printf("char is other\n");
	}
	}
	return 0;
}
