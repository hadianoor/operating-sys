#include<stdio.h>
#include<unistd.h> 
void array(int a[],int n)
{
       int i;
	for(i=0;i<n;i++)
	{
		a[i]=i;
	}
}
int sum(int a[],int i,int n)
{
	int sum=0;
	int k;
        for (k=i;k<n;k++) 
	{
		sum=sum+a[k];
	}
	return sum;
}
int main()
{    
        int sum1;
	int sum2;
	int fsum;
	int a[100];
	array(a,100);
        int i; 
        for(i=1;i<=2;i++) 
	{
	int cpid=fork();
        if (cpid==0)
	{
		sum1 =sum(a,0,25);
	//printf("I AM CHILD"); 
	}
	else
	{ 
		sum2=sum(a,25,100);
	//printf("I AM PARENT "); 
	}
        fsum=sum1+sum2;
	} 
	printf("%d",fsum); 
	//printf('/n') ;
	
	0;

 
} 
