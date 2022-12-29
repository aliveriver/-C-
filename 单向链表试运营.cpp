#include<stdio.h>
#include<stdlib.h>
#define node n
struct NODE
{
	char qq;
	struct NODE *next;
};
struct NODE* creat(struct NODE *p)
{
	if(p->next==NULL) return NULL;
	struct NODE *q=(struct NODE*)malloc(sizeof(struct NODE));
	scanf("%c",&(q->qq));
	q->next=p->next;
	p->next=q;
	return q;
}
void del(struct NODE *p)
{
	struct NODE *temp;
	if(p->next->next==NULL)
	{
		free(p->next);
		return;
	}
	else
	{
		temp=p->next->next;
		free(p->next);
		p->next=temp;
		return;
	}
}
int main()
{
	struct NODE *head=NULL;
	struct NODE a1={'a',NULL};
	struct NODE a2={'b',NULL};
	head=&a1;
	a1.next=&a2;
	struct NODE *a3;
	a3=creat(head);
	for(struct NODE *t=head;t!=NULL;t=t->next)
	{
		printf("%c\n",t->qq);
	}
	del(head);
	for(struct NODE *t=head;t!=NULL;t=t->next)
	{
		printf("%c\n",t->qq);
	}
	return 0;
}
