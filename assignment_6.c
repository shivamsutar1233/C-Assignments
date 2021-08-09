//Author - SHIVAM ASHOK SUTAR
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int enq_a();
int deq_a();
int display_a();
int enq_b();
int deq_b();
int display_b();
int q[100];
struct node
{
    int data;
    struct node *next;
};
struct node *newnode,*head,*p,*temp;

int main()
{
	int n;
	printf("\nQueue \n1.with array\n2.with SLL\nHow will you continue:");
	scanf("%d",&n);
	switch(n) 
	{
		case 1:
		      queue_a();
		      break;
		case 2:
		      queue_b();
		      break;
		      
	}
}
int queue_a()
{
     int ch,q[100];
     printf("\nprogram for implemetation of Queue using arrays");

    while (1)
    {
            
      printf("\n1.Enqueue\n2.Dequeue\n3.Display");
      printf("\nEnter your choice");
      scanf("%d",&ch);
      switch (ch)
      {
      case 1:
          enq_a();
          break;
      case 2:
          deq_a();
          break;
      case 3:
          display_a(q);        
      }

    }
}
int queue_b()
{
    int ch;
    printf("\nprogram for Queue implemntation using SLL ");
    while(1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\nenter your choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enq_b();
            break;
        case 2:
            deq_b();
            break;
        case 3:
             display_b();
        }
    }
}
int enq_a()
{
    int i=0,ch=1;
    while (ch)
    {
        printf("\nenter the value");
        scanf("%d",&q[i]);
        i++;
        printf("\n enter the choice 1||0");
        scanf("%d",&ch);
    }
    
}
int display_a()
{
    int i=0;
    if(q[0]==0)
    {
        printf("\nQueue is empty");
    }
    else
    {
        while (q[i]!=0)
        {
            printf("%d->",q[i]);
            i++;
        }
    }    
}
int deq_a()
{
    
    int ch,j,i;
   if(q[0]==0)
   {
       printf("\nQueue is empty");
   }
   else
   {
       while (ch)
       {
           printf("\nDeleting Starting Entry");
           q[0]=0;
           i=0;j=1;
           while (q[j]!=0)
           {
               
               q[i]=q[j];
               i++;j++;
           }
           printf("\ndo you want to delete further...1||0");
           scanf("%d",&ch);
       }
   }
}
int enq_b()
{
    int ch=1;
    printf("\ncreating your Queue");
    while(ch)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            head=newnode;
            printf("\nenter the data");
            scanf("%d",&head->data);
            head->next=NULL;
            p=head;
        }
        else
        {
            printf("\nenter the data");
            scanf("%d",&newnode->data);
            p->next=newnode;
            p=newnode;
            p->next=NULL;
        }
        printf("\nenter your choice 1||0");
        scanf("%d",&ch);
    }
}
int display_b()
{
    p=head;
    if(head==NULL)
    {
        printf("\nQueue is empty...");
    }
    else
    {
        while (p->next!=NULL)
        {
           printf("%d->",p->data);
           p=p->next;
        }
        printf("%d",p->data);
    }
}
int deq_b()
{
    int ch=1;
    while (ch)
    {
        if(head==NULL)
        {
            printf("\nQueue is empty...");
            break;
        }
        else
        {
            printf("\ndeleting element from queue...");
            temp=head->next;
            free(head);
            head=temp;
            printf("\nenter your choice 1||0");
            scanf("%d",&ch);
        }
        
    }
}
