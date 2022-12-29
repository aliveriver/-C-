#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10000],str2[10000];
	char *p1=str1,*p2=str1;
	char *p3;
	int i=1;
	scanf("%s",str1);
	scanf("%s",str2);
	while(p2!=NULL&&p3!=NULL)
	{
		p2=strstr(p1,str2);
		if(p2==NULL) break;
		for(p3=p2;p3+strlen(str2)<=p1+strlen(str1)-1;p3++)
		{
			if(p3==NULL) break;
			*p3=*(p3+strlen(str2));
		}
		for(int j=0;j<strlen(str2);j++)
		{
			*(p1+(strlen(str1)-i))='\0';
		}
	}
	printf("%s",p1);
	return 0;
}
