//Author - SHIVAM ASHOK SUTAR
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int substring();
int pallindrome();
int string_length();
int string_reverse();
int string_copy();
int string_compare();
int length(char str[100]);

int main()
{
	int n;
	while(1) {
	printf("\n1.substring\n2.pallindrome\n3.length\n4.reverse\n5.copy\n6.compare\n Enter your choice");
	scanf("%d",&n);
	switch(n) 
	{
		case 1:
		      substring();
		      break;
	   case 2:
	         pallindrome();
	         break;
	   case 3:
	         string_length();
	         break; 
	   case 4:
	         string_reverse();
	         break;
	   case 5:
	         string_copy();
	         break;
	   case 6:
	         string_compare();
	         break;
	   default:
	         printf("\nThank you for interatcting with my program...Have a nice day...");
	         break;                      
	}
	}
}
int substring()
{
	int i=0,j=0,l1,l2;
	char *ptr1,*ptr2;
	char str[100];
	char sub[100];
	printf("\nenter the string:");   //program for finding substring without pointers 
	scanf("%s",str);
	l1=length(str);
	printf("\nenter the substring you want to search:");
	scanf("%s",sub);
	l2=length(sub);
	while(i!=l1)
	{
		if(str[i]==sub[j])
		{
			i++;
			j++;
		}
		else 
		{
			i++;
			j=0;
		}
		if(j==l2)
		{
			printf("\nsubstring found without pointers");
		}
	}
	ptr1=str;
	ptr2=sub;           //program for finding substring with pointers...
	while(*ptr1!='\0')
	{
		if(*ptr1==*ptr2)
		{
			ptr1++;
			ptr2++;
		}
		else 
		{
			ptr1++;
			ptr2=sub;
		}
		if(*ptr2=='\0')
		{
			printf("\nsubstring found with pointers");
		}
	}
}
int length(char str[100])
{
	int i=0;  
	int count=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}
int pallindrome()
{
	int i=0,j=0,l1=0;
	char str[100];
	char *ptr1=NULL,*ptr2=NULL;
	printf("\nenter the string:");      //without pointers program...
	scanf("%s",str);
	l1=length(str);
	printf("\n%d",l1);
	j=l1-1;
	while(i!=l1/2)    
	{
		if(str[i]==str[j])
		{
			i++;
			j--;
		}
		else
		{
			printf("\nstring is not palindrome...");
			break;
		}
		if(i==j)
		{
			printf("\nstring is palindrome...");
		}

	}
	printf("\nenter the string:");      //with pointers program...
	scanf("%s",str);              
	l1=length(str);
	i=0;
	ptr1=str[0];
	ptr2=str[l1-1];
	while(i>=l1/2)
	{
		if(*ptr1==*ptr2)
		{
			ptr1++;
			ptr2--;
		}
		else
		{
			printf("\nstring is not palindrome");
			break;
		}
		
		if(ptr1==ptr2)
		{
			printf("\nstring is palindrome");
			
		}
		i++;
	}
	
	
	
}
int string_length()
{
	int i=0,count=0;
	char *ptr;
	char str[100];
	printf("\nenter the string");    //program for finding string length without pointers... 
	scanf("%s",str);
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	printf("\nstring length is %d",count);  //program for finding string length with pointers...
	printf("\nenter another string ");
	scanf("%s",str);
	ptr=str;
	count=0;
	while(*ptr!='\0')
	{
		ptr++;
		count++;
	}
	printf("\nstring length is %d",count);
}
int string_reverse()
{
	char str[100],str1[100];
	char temp;
	char *ptr1,*ptr2;
	int i=0,j=0,k=0,count=0;
	printf("\nenter the string ");
	scanf("%s",str);
   while(str[i]!='\0')
   {
   	i++;
   	count++;
   }
   k=count-1;
   while(j!=count/2)
   {
   	temp=str[j];
   	str[j]=str[k];
   	str[k]=temp;
   	j++;
   	k--;
   }
   printf("\n the reverse string is %s",str); 
   printf("\nenter another string");
   scanf("%s",str1);
   i=0;
   count=0;
   while(str1[i]!='\0')
   {
   	i++;
   	count++;
   }
   printf("%d",count);
   
   ptr1=str1;
   ptr2=str1;
   for(i=0;i<count-1;i++)
   {
   ptr2++;
   }

   //printf("%c",*ptr2);
   j=0;
   while(j!=count/2)
   {
   	temp = *ptr1;
   	*ptr1 = *ptr2;
   	*ptr2 = temp;
   	 ptr1++;
   	 ptr2--;
   	j++;   	
   }
   printf("\n the reverse string is %s",str1);
   
}
int string_copy()
{
	int i=0,j=0;
	char *ptr1,*ptr2;
	char str1[100],str2[100];
	printf("\nenter the string ");
	scanf("%s",str1);
	printf("\nenter the another string");
	scanf("%s",str2);
	printf("first string-%s second string-%s",str1,str2); 
   while(str1[j]!='\0')      //program for copying the string without pointers... 
   {
   	str1[i]=str2[j];
   	i++;
   	j++;
   }
   printf("\n Updated first string-%s second string%s",str1,str2);   
	printf("\nenter the string ");
	scanf("%s",str1);
	printf("\nenter the another string");
	scanf("%s",str2);
	printf("first string-%s second string-%s",str1,str2);
   ptr1=str1;
   ptr2=str2;        //program for copying the string with pointers...        
   while(*ptr1!='\0')
   {
   	*ptr1=*ptr2;
   	ptr1++;
   	ptr2++;
   }
   printf("\nUpdated first string-%s second string%s",str1,str2);
}

int string_compare()
{
	int i=0;
	char *ptr1,*ptr2;
	char str1[100],str2[100];
	printf("\nenter the string");
	scanf("%s",str1);
	printf("\nenter the string");
	scanf("%s",str2);
	while(str1[i]!='\0') //program for comparing the strings without pointers...
	{
		if(str1[i]==str2[i])
		{
			i++;
		}
		else 
		{
			printf("\nstrings are not matching...");
			break;
		}
		if(str1[i]=='\0'&&str2[i]=='\0')
		{
			printf("\nstrings are matching...");
		}
	}
	printf("\nenter the string");
	scanf("%s",str1);
	printf("\nenter the string");
	scanf("%s",str2);
	ptr1=str1;
	ptr2=str2;
	while(*ptr1!='\0')  //program for comparing the strings with pointers...
	{
		if(*ptr1==*ptr2)
		{
			ptr1++;
			ptr2++;
		}
		else 
		{
			printf("\nstrings are not matching...");
			break;
		}
		if(*ptr1=='\0'&&*ptr2=='\0')
		{
			printf("\nstrings are matching...");
		}
	}
	
}
