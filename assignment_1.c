//Author - SHIVAM ASHOK SUTAR

/*'C' PROGRAM FOR STORING THE INFORMATION OF STUDENT
      AND PERFORMING THE FOLLOWING OPERATIONS 
      1.DISPLAY THE DATA IN DESCENDING ORDER OF PERCENTAGE. 
      2.DISPLAY THE DATA OF ROLL NO. SPECIFIED BY USER.*/ 
#include<stdio.h>
#include<string.h>
int search();          //function for searching a particular record...
int bubble();          //function for sorting list according to the roll no. ...
struct student
{
  int roll;
  char name[20];
  float per;
 
}s[100];
int main()
{ 
  int n1,i,j,k;
  int ch=1;
  printf("\n enter the no. of entries");
  scanf("%d",&n1);
  for(i=0;i<n1;i++)
  {
   printf("\nenter Roll No.:");
   scanf("%d",&s[i].roll);
   printf("\nenter Name:");
   scanf("%s",s[i].name);
   printf("\nenter Percentage:");
   scanf("%f",&s[i].per);
  }
   printf("\n your entered data is as follows:");   
  printf("\n\tRoll No.\tName\tPercentage");
  for(i=0;i<n1;i++)
  {
    printf("\n\t%d\t\t%s\t\t%f",s[i].roll,s[i].name,s[i].per); 

  }
  while(ch)
  {
   printf("\n1.sorting\n2.searching\n(according to Roll No.)\n Enter your choice:");
   scanf("%d",&k);
   switch(k)
   {
    case 1:bubble(n1);
          break;
    case 2:search();
          break;
  }
    printf("\nenter the choice");
    scanf("%d",&ch);
  }


  return 0;
}
int bubble(int n)
{  int i,j
;
   struct student temp[100];
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    if(s[i].per>s[j].per)
     {
       temp[i].roll=s[i].roll;
       s[i].roll=s[j].roll;
       s[j].roll=temp[i].roll;
       temp[i].per=s[i].per;
       s[i].per=s[j].per;
       s[j].per=temp[i].per;
       strcpy(temp[i].name, s[i].name); 
       strcpy(s[i].name, s[j].name); 
       strcpy(s[j].name, temp[i].name); 

     }
   }
  }
  printf("\n your updated data is as follows:");   
  printf("\n\tRoll No.\tName\tPercentage");
  for(i=0;i<n;i++)
  {
    printf("\n\t%d\t\t%s\t\t%f",s[i].roll,s[i].name,s[i].per); 
  }
}
int search(int n2)
{  int k,i=0;
   printf("\nEnter the Roll No.:");
   scanf("%d",&k);
   while(i!=100)
   {
    if(s[i].roll==k)
    {
    printf("\n\t%d\t\t%s\t\t%f",s[i].roll,s[i].name,s[i].per); 
    }
   i++;
   }

}
