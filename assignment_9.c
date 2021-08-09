//Author - SHIVAM ASHOK SUTAR
//program for performing the addition of two polynomial...
#include<stdio.h>
int main()
{
	int power1[20],coef1[20];  //declaring arrays for storing the power and coefficient of polynomial first...
	int power2[20],coef2[20]; //declaring arrays for storing the power and coefficient of polynomial second...
	int power[40],coef[40];    //declaring arrays for storing the power and coefficient of polynomial resulting...
	int i=0,j=0,k=0,m=0,n=0;
	printf("\nhow coefficient does polynomial-1 contains:");
	scanf("%d",&m);
	printf("\nhow coefficient does polynomial-2 contains:");
	scanf("%d",&n);
	for(i=0;i<m;i++) 
	{
		printf("\nenter the coefficient and power");
		scanf("%d%d",&coef1[i],&power1[i]);
	}
	for(i=0;i<m;i++) 
	{
		printf("|%d|%d|-",coef1[i],power1[i]);
	}
	for(j=0;j<n;j++) 
	{
		printf("\nenter the coefficient and power");
		scanf("%d%d",&coef2[j],&power2[j]);
	}
	for(j=0;j<n;j++) 
	{
		printf("|%d|%d|-",coef2[j],power2[j]);
	}	

	i=0,j=0,k=0;
	while(i<m&&j<n)
	{
		if(power1[i]==power2[j])
		{
			coef[k]=coef1[i]+coef2[j];
			power[k]=power1[i];
			i++,j++,k++;
		}
		else if(power1[i]>power2[j])
		{
			coef[k]=coef1[i];
			power[k]=power1[i];
			i++,k++;
		}
		else if(power1[i]<power2[j])
		{
			coef[k]=coef2[j];
			power[k]=power2[j];
			k++,j++;
		}
	}
	while(i<m)
	{
		coef[k]=coef1[i];
		power[k]=power1[i];
		i++,k++;		
	}
	while(j<n)
	{
		coef[k]=coef2[j];
		power[k]=power1[j];
		j++,k++;		
	}
	m=k;
	printf("\nresultant polynomial is as follows:\n");
	for(k=0;k<m;k++)
	{
		
		printf("|%d|%d|-",coef[k],power[k]);
	}
}
