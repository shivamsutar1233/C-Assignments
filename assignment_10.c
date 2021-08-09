//Author - SHIVAM ASHOK SUTAR
//program for performing operations on matrix like addition,multiplication,transpose...
#include<stdio.h>
int add();   //function for matrix addition with pointers...
int mul();   //function for matrix multiplaication...
int trans(); //function for making transose of given matrix...
int main()
{
	int n;
	while(1) 
	{
	printf("\n1.addition\n2.multiplication\n3.transpose\nhow will you continue:");
	scanf("%d",&n);
	switch(n) 
	{
		case 1:
		       add();
		       break;
		case 2:
		       mul();
		       break;
		case 3:
		       trans();
		       break;
		default:
		       printf("\nthank you for interacting with my program...Have a nice day...");
		       break;
	}
	}
}
int add()
{
	int mat1[20][20],mat2[20][20],i=0,j=0,k=0,temp,m,n,sum=0,res[20][20];	
   printf("\nenter the rows");
   scanf("%d",&m); 	
   printf("\nenter the cols");
   scanf("%d",&n); 	   
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		scanf("%d",(*(mat1+i)+j));
    	}
   }
  for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		scanf("%d",(*(mat2+i)+j));
    	}
   }
   printf("\nyour entered matrix is as follows:\n");
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		printf("\t%d",*(*(mat1+i)+j));
   	}
   	printf("\n");
   }
   printf("\nyour entered matrix is as follows:\n");
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		printf("\t%d",*(*(mat2+i)+j));
   	}
   	printf("\n");
   }
 
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   	   *(*(res+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j);
   	}
   }
   printf("\nyour entered matrix is as follows:\n");
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		printf("\t%d",*(*(res+i)+j));
   	}
   	printf("\n");
   }
	
}
int mul()
{
	int mat1[20][20],mat2[20][20],i=0,j=0,k=0,temp,m,n,sum=0,mul[20][20];	
   printf("\nenter the rows");
   scanf("%d",&m); 	
   printf("\nenter the cols");
   scanf("%d",&n); 	   
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		scanf("%d",&mat1[i][j]);
   	}
   }
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		scanf("%d",&mat2[i][j]);
   	}
   }
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		for(k=0;k<n;k++) 
   		{
   			sum=sum+mat1[i][k]*mat2[k][j];
   		}
   		mul[i][j]=sum;
   		sum=0;
   	}
   }
   printf("\nyour entered matrix is as follows:\n");
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		printf("\t%d",mat1[i][j]);
   	}
   	printf("\n");
   }
   printf("\nyour entered matrix is as follows:\n");
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		printf("\t%d",mat2[i][j]);
   	}
   	printf("\n");
   }
   
   printf("\nmatrix multiplication is as follows:\n");
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		printf("\t%d",mul[i][j]);
   	}
   	printf("\n");
   }

	
}
int trans()
{
	int mat1[20][20],mat2[20][20],i=0,j=0,k=0,temp,m,n;
   printf("\nenter the rows");
   scanf("%d",&m); 	
   printf("\nenter the cols");
   scanf("%d",&n); 	   
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		scanf("%d",&mat1[i][j]);
   	}
   }
   printf("\nyour entered matrix is as follows:\n");
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		printf("\t%d",mat1[i][j]);
   	}
   	printf("\n");
   }
   for(i=0;i<m;i++) 
   {
   	for(j=i;j<n;j++) 
   	{
   		temp=mat1[j][i];
   		mat1[j][i]=mat1[i][j];
   		mat1[i][j]=temp;
   	}
   }
   printf("\ntranspose of entered matrix is as follows:\n");
   for(i=0;i<m;i++) 
   {
   	for(j=0;j<n;j++) 
   	{
   		printf("\t%d",mat1[i][j]);
   	}
   	printf("\n");
   }
   
}
