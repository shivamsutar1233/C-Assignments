//Author - SHIVAM ASHOK SUTAR
//creating and managing the database with and without pointers...
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create_a();          //function for creating very first enteries
void display_a();         //function for displaying very first enteries
void display_update_a();  //function for displaying updated records
void sort_a();            //function for sorting the records
void modified_a();        //function for modifying the records
void append_a();          //function for entering the new records in  existing records
void create_b();           //function for creating very first enteries
void display_b();			 //function for displaying very first enteries
void display_update_b();	//function for displaying updated records
void sort_b();				//function for sorting the records
void modified_b();			//function for modifying the records
void append_b();				//function for entering the new records in  existing records
struct emp
{
  int emp_id;
  char emp_name[20];
  int emp_salary;
  char emp_desig[20];
};
struct emp e[100];
struct emp temp1;
struct emp *em1,*em2,*temp;
struct emp emp[100];
struct emp *em;
int main()
{
	int n;
	while(1) {
	printf("\n1.with pointers\n2.without pointers\nHow will you continue:");
	scanf("%d",&n);
	switch(n) 
	{
		case 1:
		      database_a();
		      break;
		case 2:
		      database_b();
		      break;
		default:
		      printf("\nthank you for interacting with my program...Have a nice day...");
		      break;
	}	}
}
int database_a()
{  int i=0,j=0,k;
    int ch=1,n;
   create_a();
   display_a();   
   while(ch)
 {
   printf("\nenter your choice...\n1.sorting\n2.modification\n3.append");
   scanf("%d",&n);
   switch(n)
  {
    case 1:sort_a();
              display_update_a();
              break;
   case 2:modified_a();
              display_update_a();
              break;
   case 3:append_a();
              display_update_a();
              break;
             
  }
   printf("\nenter the choice 1||0 :"); 
   scanf("%d",&k);
 }
}
int database_b()
{  int i=0,j=0,k;
    int ch=1,n;
   create_b();
   display_b();   
   while(ch)
 {
   printf("\nenter your choice...\n1.sorting\n2.modification\n3.append");
   scanf("%d",&n);
   switch(n)
  {
    case 1:sort_b();
              display_update_b();
              break;
   case 2:modified_b();
              display_update_b();
              break;
   case 3:append_b();
              display_update_b();
              break;
             
  }
   printf("\nenter the choice 1||0 :"); 
   scanf("%d",&k);
 }
}
void append_a()
{ 
   int ch=1;
   em=emp;
   while(em->emp_id!=NULL)
   {em++;}
     while(ch)
   {
     printf("\n enter employee id:");
     scanf("%d",&em->emp_id);
     printf("\n enter employee name:");
     scanf("%s",em->emp_name);
     printf("\n enter employee designation:");
     scanf("%s",em->emp_desig);
     printf("\n enter employee salary:");
     scanf("%d",&em->emp_salary);
     printf("\nenter choice 1||0");
     scanf("%d",&ch);
  }
}
void modified_a()
{   int k=0;
    printf("\n enter the employee id who's records to be modified:");
    scanf("%d",&k);
    em=emp;
    while(k!=em->emp_id)
   {em++;}
     printf("\n enter employee modified name:");
     scanf("%s",em->emp_name);
     printf("\n enter employee modified designation:");
     scanf("%s",em->emp_desig);
     printf("\n enter employee modified salary:");
     scanf("%d",&em->emp_salary);
}

void sort_a()
{
 em1=emp;
 printf("\nsorting your data...");
 while(em1->emp_id!=NULL)
   {
   	 em2=em1;
      while(em2->emp_id!=NULL)
      {
          if(em1->emp_id>em2->emp_id)
          {
               temp->emp_id=em2->emp_id;
               em2->emp_id=em1->emp_id;
               em1->emp_id=temp->emp_id;
               temp->emp_salary=em2->emp_salary;
               em2->emp_salary=em1->emp_salary;
               em1->emp_salary=temp->emp_salary;
               strcpy(temp->emp_name,em2->emp_name);
               strcpy(em2->emp_name,em1->emp_name);
               strcpy(em1->emp_name,temp->emp_name);
               strcpy(temp->emp_desig,em2->emp_desig);
               strcpy(em2->emp_desig,em1->emp_desig);
               strcpy(em1->emp_desig,temp->emp_desig);
          }
           em2++;
      }
       em1++;
   }
}

void display_update_a()
{
	em=emp;
	printf("\nyour updated records are as follows:");
	printf("\n\tempp_id\temp_name\temp_salary\tdesigantion");
	while(em->emp_id!=NULL)
	{
		printf("\n\t%d\t%s\t%d\t%s",em->emp_id,em->emp_name,em->emp_salary,em->emp_desig);
		em++;
	}
	
}

void display_a()
{
	em=emp;
	printf("\nyour entered records are as follows:");
	printf("\n\tempp_id\temp_name\temp_salary\tdesigantion");
	while(em->emp_id!=NULL)
	{
		printf("\n\t%d\t%s\t%d\t%s",em->emp_id,em->emp_name,em->emp_salary,em->emp_desig);
		em++;
	}
	
}
void create_a()
{
	int ch=1;
	em=emp;
	while(ch)
	{
		printf("\nenter the id:");
		scanf("%d",&em->emp_id);
 		printf("\nenter the name:");
		scanf("%s",em->emp_name);
		printf("\nenter the salary:");
		scanf("%d",&em->emp_salary);
		printf("\nenter the designation:");
		scanf("%s",em->emp_desig);
		printf("\nenter the choice 1||0");
		scanf("%d",&ch);	
		em++;
	}
	
	
}
void create_b()
{  int ch=1;
    int i=0;
   while(ch)
   {
     printf("\n enter employee id:");
     scanf("%d",&e[i].emp_id);
     printf("\n enter employee name:");
     scanf("%s",e[i].emp_name);
     printf("\n enter employee designation:");
     scanf("%s",e[i].emp_desig);
     printf("\n enter employee salary:");
     scanf("%d",&e[i].emp_salary);
     i++;
     printf("\nenter choice 1||0");
     scanf("%d",&ch);
	  }
}
void display_b()
{ int i=0;
   printf("\n your entered records are as follows:");
   printf("\n\tID\tName\tDesignation\tSalary");
   while(e[i].emp_id!=NULL)
   {
     printf("\n\t%d\t%s\t%s\t\t%d",e[i].emp_id,e[i].emp_name,e[i].emp_desig,e[i].emp_salary);
     i++;
   }
}
void sort_b()
{ int i=0,j=0;
 for(i=0;i<100;i++)
   {
      for(j=0;j<100;j++)
      {
          if(e[i].emp_id>e[j].emp_id)
          {
               temp1.emp_id=e[i].emp_id;
               e[i].emp_id=e[j].emp_id;
               e[j].emp_id=temp1.emp_id;
               temp1.emp_salary=e[i].emp_salary;
               e[i].emp_salary=e[j].emp_salary;
               e[j].emp_salary=temp1.emp_salary;
               strcpy(temp1.emp_name,e[i].emp_name);
               strcpy(e[i].emp_name,e[j].emp_name);
               strcpy(e[j].emp_name,temp1.emp_name);
               strcpy(temp1.emp_desig,e[i].emp_desig);
               strcpy(e[i].emp_desig,e[j].emp_desig);
               strcpy(e[j].emp_desig,temp1.emp_desig);
          }
      }
   }
}
void display_update_b()
{ int i=0;
   printf("\n your updated records are as follows:");
   printf("\n\tID\tName\tDesignation\tSalary");
   while(e[i].emp_id!=NULL)
   {
     printf("\n\t%d\t%s\t%s\t\t%d",e[i].emp_id,e[i].emp_name,e[i].emp_desig,e[i].emp_salary);
     i++;
   }
}
void modified_b()
{ int k,i=0;
    printf("\n enter the employee id who's records to be modified:");
    scanf("%d",&k);
    while(k!=e[i].emp_id)
   {i++;}
     printf("\n enter employee modified name:");
     scanf("%s",e[i].emp_name);
     printf("\n enter employee modified designation:");
     scanf("%s",e[i].emp_desig);
     printf("\n enter employee modified salary:");
     scanf("%d",&e[i].emp_salary);
}
void append_b()
{ int ch=1;
   int i=0;
   while(e[i].emp_id!=NULL)
   {i++;}
     while(ch)
   {
     printf("\n enter employee id:");
     scanf("%d",&e[i].emp_id);
     printf("\n enter employee name:");
     scanf("%s",e[i].emp_name);
     printf("\n enter employee designation:");
     scanf("%s",e[i].emp_desig);
     printf("\n enter employee salary:");
     scanf("%d",&e[i].emp_salary);
     i++;
     printf("\nenter choice 1||0");
     scanf("%d",&ch);
  }
}

