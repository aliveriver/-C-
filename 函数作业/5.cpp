#include<stdio.h>
void a(int x)
{
	if(x==0) return;
	a(x/2);
	printf("%d",x%2);
} 
int main()
{
	int n;
	scanf("%d",&n);
	a(n);
	return 0;
}
