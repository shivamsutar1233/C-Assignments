//Author - SHIVAM ASHOK SUTAR
//this is program for creating,traversing and displaying the biinay search tree...
#include<stdio.h>
#include<stdlib.h>
void create();     //funcion for creating the binary search tree...
void preorder();   //funtion for displaying BST in preorder...
void inorder();    //function for displaying BST in inorder...
void postorder();  //function for displaying BST in postorder...
void search();     //function for searching a particular data in BST...
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newnode, *root,*p,*q;
int main()
{
	int n,ch,key,choice=1;
	while(1) 
	{
		printf("\n1.create\n2.display\n3.search\nhow willl you continue:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			      create();
			      break;
			case 2:
			      printf("\n1.preorder\n2.inorder\n3.postorder\nhow will you continue:");
			      scanf("%d",&ch);
			      switch(ch)
			      {
			      	case 1:
			      	      preorder(root);
			      	      break;
			         case 2:
			      	      inorder(root);
			      	      break;
			      	case 3:
			      	      postorder(root);
			      	      break;
			      }
			      break;
			case 3:
				while(ch)
          	{
              printf("\nenter the key");
			     scanf("%d",&key);
			     search(root,key);
		        printf("\nenter the choice 1||0");
		        scanf("%d",&ch);
		    	}	
			      			      break;       
		}
	}
}
void create()
{
	int k,ch=1;
	printf("\ncreating your BST...");
	
	while(ch) 
	{
		newnode=(struct node*)malloc(sizeof(struct node));		
		if(root==NULL)
		{
			root=(struct node*)malloc(sizeof(struct node));
			root=newnode;
	   	printf("\nenter the root data");
    	   scanf("%d",&root->data);
    	   root->left=NULL;
    	   root->right=NULL;
	      p=root;			
		}
		else 
		{
			printf("\nenter the data");
	      scanf("%d",&k);
	      p=root;
			while(p!=NULL)
			{
				q=p;
				if(k<p->data)
				{
					p=p->left;
				}
				else if(k>p->data)
				{
					p=p->right;
				}
			}
			if(k<q->data)
			{
				newnode->data=k;
				newnode->left=NULL;
				newnode->right=NULL;
				q->left=newnode;
			}
			else 
			{
				newnode->data=k;
				newnode->left=NULL;
				newnode->right=NULL;
				q->right=newnode;				
			}
		}
		printf("\nenter the choice 1||0");
		scanf("%d",&ch);
				
	}
	inorder(root);
}
void inorder(struct node *s)
{
	if(s==NULL)
    return;	
		inorder(s->left);
		printf("%d-",s->data);
		inorder(s->right);
	
}
void preorder(struct node *s)
{
	if(s==NULL)
	return;
		printf("%d-",s->data);
		preorder(s->left);
		preorder(s->right);

}
void postorder(struct node *s)
{
	if(s==NULL)
	 return;
		postorder(s->left);
		postorder(s->right);
		printf("%d-",s->data);
	
}
void search(struct node *r,int key)
{
		if(r==NULL)
		{
			printf("\ntree is empty...");
		}
		else 
		{
			if(key<r->data)
			{
				search(r->left,key);
			}
			if(key>r->data) 
			{
				search(r->right,key);
			}
			if(key==r->data)
			{
				printf("\ndata found in tree...");
			}
		}

}
