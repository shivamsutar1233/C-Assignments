//Author - SHIVAM ASHOK SUTAR
//creating singly linked list and performing basic operation on SLL...
#include<stdio.h>
#include<stdlib.h>
int display();  //function for displaying the SLL...
int insert();   //function for inserting the element in SLL...
int create();   //function for creating the SLL...
int delete();   //function for  deleting nodes from the SLL...
int dis_rev();  //function for displaying the reverse SLL without actually reversing it...
int reverse();  //function for reversing the SLL...
struct node
{
	int data;
	struct node *next;
};
struct node *head,*temp,*p,*q,*r,*tail,*n1,*prev;
int main()
{
	int ch;
	create();
	while(1) 
	{	
     printf("\n How will you continue:");
	  printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Display Reverse\n5.Reverse SLL");
	  scanf("%d",&ch);
	  switch(ch)
	  {
	  	case 1:
	  	       insert();
	  	       break;
	  	case 2:
	  	       delete();
	  	       break;
	  	case 3:
	  	       display();
	  	       break;
	  	case 4:
	  	       dis_rev();
	  	       break;
      case 5:
             reverse();
             break;
      default:
             printf("\nthank you for interacting with my program...Have a nice day...");
             break;
	  }
	}
}
int reverse()
{
	if(head==NULL)
	{
		printf("\nlist is empty...");
	}
	else
	{
		p=head;
		q=p->next;
		p->next=NULL;
		while(q!=NULL)
		{
			r=p;
			p=q;
			q=q->next;
			p->next=r;
		}
		head=p;
	}
	display();
}
int dis_rev()
{
	int stack[100],i=0;
	  if(head==NULL)
	  {
	  	printf("\nlist is empty...");
	  }
	  else
	  {
 	       p=head;
 	       while(p->next!=NULL)
 	       {
 	       	stack[i]=p->data;
 	       	i++;
 	       	p=p->next;
 	       }		
 	       stack[i]=p->data;
 	       /*i=0;
 	       while(stack[i]==NULL)
 	       {
 	       	i++;
 	       }*/
 	       while(i!=0)
 	       {
 	       	printf("%d->",stack[i]);
 	       	i--;
 	       }
	  	    printf("%d",stack[i]);
	  }
}
int delete()
{
	int c1=1,c2=1,c3=1,k=0,count=1,del;
   printf("\nwhich node you want to delete");
 	printf("\n1.starting node\n2.intermediate node\n3.ending node");
 	scanf("%d",&del);
 	switch(del)
 	{
 	 case 1:      
 	        while(c1)
 	        {
 	       	  if(head==NULL)
 	           {
 	       		 printf("\nlist is empty nothing to delete");
 	       	  }
 	       	  else 
 	       	  {
 	       		 temp=head->next;
 	       		 free(head);
 	       		 head=temp;
 	       	  }
 	       	  printf("\nenter the choice 1||0");
 	           scanf("%d",&c1);
 	        }
 	        display();
 	        break;
 	 case 2:
 	       
 	       while(c2) 
 	       {
 	       	count=0;		
 	         if(head==NULL)
 	       	{
 	       		printf("\nlist is empty");
 	       	}
 	       	else 
 	       	{
 	       		printf("\nenter the which you want delete:");
 	       		scanf("%d",&k);
 	       		p=head;
 	       		if(count==0)
 	       		{
 	       			temp=head->next;
 	       			free(head);
 	       			head=temp;
 	       		}
 	       		else {
 	       		while(count!=k)
 	       		{
 	       			count++;
 	       			q=p;
 	       			p=p->next;
 	       		}
 	       		q->next=p->next;
 	       	   free(p);
 	       	}}
 	       	printf("\nenter the choice 1||0");
 	       	scanf("%d",&c2);
 	       }
 	       display();
 	       break;
 	 case 3:
 	       while(c3)
 	       {
 	       	if(head==NULL)
 	       	{
 	       		printf("\nnothing to delete in list");		
 	       	}
 	       	else 
 	       	{
 	       		p=head;
 	       		while(p->next!=NULL)
 	       		{
 	       			q=p;
 	       			prev=q;
 	       			p=p->next;
 	       			tail=p;
 	       		}
 	       		free(tail);
 	       		tail=prev;
 	       		tail->next=NULL;
 	       	}
 	       	printf("\nenter the choice 1||0");
 	       	scanf("%d",&c3);
 	       }
 	       display();
    }
}
int insert()
{
	struct node *n2;
	int IN,ch1=1,ch2=1,ch3=1,count=1,k=0;
	printf("\nDo you want to insert elements,if Yes Then\n1.Insert data at the start\n2.insert data at intermediate\n3.insert data at end");
   scanf("%d",&IN);
	switch(IN)
	{
				
		case 1:
		 		while(ch1) 
     			{
      			n2=(struct node*)malloc(sizeof(struct node));
   				if(head==NULL)
 					{
  					   head=n2;
						printf("\nenter the data");
						scanf("%d",&head->data);
						head->next=NULL;
						p=head;
   				}
   				else
   				{
	      			printf("enter the data to be inserted at begining");
						scanf("%d",&n2->data);
        		 		q=head;
	   	   		head=n2;
    	   			head->next=q;
   				}
      			printf("\nenter the choice 1/0");
					scanf("%d",&ch1);
			 	}
					display();
   				break;
    	case 2:
    	       p=head;
    	       while(ch2)
    	       {
    	       	n2=(struct node*)malloc(sizeof(struct node));
    	       	if(head==NULL)
    	       	{
    	       		head=n2;
    	       		printf("\nenter the data");
    	       		scanf("%d",&head->data);
    	       		head->next=NULL;
    	       		p=head;
    	       	}
    	       	else
    	       	{
    	       		printf("\nafter which node you want to insert the data:");
    	       		scanf("%d",&k);
    	       		while(count!=k)
    	       		 {
    	       		 	q=p;
    	       		 	p=p->next;
    	       		 	count++;
    	       		 }
    	       		 printf("\nenter the data");
    	       		 scanf("%d",&n2->data);
    	       		 n2->next=p->next;
    	       		 p->next=n2;
    	       		
    	       	}
    	       	printf("\nenter the choice 1/0");
					scanf("%d",&ch2);       	
    	       }
    	       display();
    	       break;
    	case 3:
    	       while(ch3) 
   		  	{
	  			 	n1=(struct node*)malloc(sizeof(struct node));
					if(head==NULL)
					{	
						head=n1;
						printf("\nnenter the data to be insert at end");
						scanf("%d",&head->data);
						head->next=NULL;
						p=head;
						tail=p;         
					}	
					else 
					{
						printf("\nenter the data to be insert at end");
						scanf("%d",&n1->data);
						prev=tail;
						tail->next=n1;
						tail=n1;
						tail->next=NULL;
					}
					printf("\nenter the choice 1/0");
					scanf("%d",&ch3);
					}
					display();
					break;
    }
	
}
int create()
{
	 int ch=1;
    printf("\ncreating a singly linked list...");
    while(ch) 
    {
	    n1=(struct node*)malloc(sizeof(struct node));
		 if(head==NULL)
		 {	
			head=n1;
			printf("\nenter the data");
			scanf("%d",&head->data);
			head->next=NULL;
			p=head;
			tail=p;         
		 }	
		 else 
		 {
			printf("\nenter the data");
			scanf("%d",&n1->data);
			p->next=n1;
			p=n1;
			tail=p;
			p->next=NULL;
	    }
		 printf("\nenter the choice 1/0");
		 scanf("%d",&ch);
	 }
    display();
}
int display()
{
	p=head;
	if(p==NULL)
	{
		printf("\nlist is empty");
	}
	else 
	{
		while(p->next!=NULL) 
	  {
		 printf("%d->",p->data);
	  	 p=p->next;
	   }
      printf("%d",p->data);		
	}
}
