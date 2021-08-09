//Author - SHIVAM ASHOK SUTAR
#include<stdio.h>
#include<stdlib.h>
void display_a();
void push_a();
void pop_a();
void display_b();
void push_b();
void pop_b();
struct node
{
	int data;
	struct node*next;
};
struct node *n,*head,*p,*tail,*q;
int s[100];
int main()
{
	int n;
	printf("\nstack \n1.with array\n2.with SLL\nHow will you continue:");
	scanf("%d",&n);
	switch(n) 
	{
		case 1:
		      stack_a();
		      break;
		case 2:
		      stack_b();
		      break;
		      
	}
}
int stack_a()
{
	int ch;
	while(1){
	printf("\nenter your choice");
	printf("\n1.push\n2.pop\n3.display");
	scanf("%d",&ch);
	switch(ch) 
	{
		case 1:
		       push_a();
		       break;
		case 2:
		       pop_a();
		       break;
		case 3:
		       display_a();
		       break;
	}
   } 
}
int stack_b()
{
	int ch=1;
	while(1){
	printf("\nenter your choice");
	printf("\n1.push\n2.pop\n3.display");
	scanf("%d",&ch);
	switch(ch) 
	{
		case 1:
		       push_b();
		       break;
		case 2:
		       pop_b();
		       break;
		case 3:
		       display_b();
		       break;
	}
   } 
}
void push_b()
{
	 int ch=1;
	 printf("\ncreating stack using SLL");
	while(ch)
	{
		n=(struct node*)malloc(sizeof(struct node));
		if(head==NULL)
		{

			head=n;
			printf("\nenter the data");
			scanf("%d",&head->data);
			head->next=NULL;
			p=head;
			tail=p;
		}
		else 
		{
			printf("\nenter the data");
			scanf("%d",&n->data);
			p->next=n;
			p=n;
			p->next=NULL;
			tail=p;
		}
		printf("\nenter the choice");
		scanf("%d",&ch);
	}
	
}
void display_b()
{
	p=head;
	if(head==NULL)
	{
		printf("\nstack is under flowing...");
	}
	while(p->next!=NULL)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("%d",p->data);		
}
void pop_b()
{
	int ch=1;
	while(ch)
	{
		p=head;
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
		}
		free(tail);
		q->next=NULL;
		tail=q;
		printf("\nenter choice");
		scanf("%d",&ch);
	}

}
void display_a()
{
	int j;
	j=99;
	if(s[99]==NULL)
	{
		printf("\nstack is underflowing...");
	}
	while(s[j]!=NULL)
	{
		printf("%d  ",s[j]);
		j--;
	}		
}
void push_a()
{
	int ch=1,i=99;
	printf("\ncreating the stack using array ");
	while(ch)
	{
		printf("\nenter the data");
		scanf("%d",&s[i]);
		i--;
		printf("\nenter your choice 1||0");
		scanf("%d",&ch);
	}
}
void pop_a()
{
	int j=99,count=100,ch=1;
	while(ch)
   {
	j=99;
	count=100;
	while(s[j]!=NULL)
	{
		j--;
		count--;	
	}
	s[count]=NULL;
	scanf("%d",&ch);
	}
}
