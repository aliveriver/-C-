#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10000],s2[10000],s3[10000];
	char *p1=s1,*p2=s1,*p3,*p4=s3;
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);
	while(p2!=NULL&&p3!=NULL)
	{
		p2=strstr(p1,s2);
		if(p2==NULL) break;
		p3=p2;
			if(p3==NULL) break;
			if(strlen(s2)==strlen(s3))
			{
				while(*p4!=NULL)
				{
					*p3=*p4;
					p4++,p3++;
				}
				p4=s3;
			}
			
			if(strlen(s2)>strlen(s3))
			{
				int c=strlen(s2)-strlen(s3);
				while(*p4!=NULL)
				{
					*p3=*p4;
					p4++,p3++;
				}
				for(char *p6=p3;p6+c<=p1+(strlen(s1)-1+c);p6++)
				{
					*p6=*(p6+c);
				}
			}
			
			if(strlen(s2)<strlen(s3))
			{
				int c=strlen(s3)-strlen(s2);
				for(char *p5=p1+(strlen(s1)-1+c);p5-c>=p3-1+strlen(p4);p5--)
				{
					*p5=*(p5-c);
				}
				while(*p4!=NULL)
				{
					*p3=*p4;
					p4++,p3++;
				}
				p4=s3;
			}
	}
	printf("%s",s1);
	return 0;
}
