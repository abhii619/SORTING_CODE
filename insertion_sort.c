#include<stdio.h>
#include <stdlib.h>
#include<string.h>


int main (void)
 { 
	 int var=0;
int *ptr=(int*)malloc(sizeof(int)*10);
printf("enter values in the array");
for(int i=0;i<10;i++)
{
	scanf("%d",&ptr[i]);
}
for(int i=1;i<10;++i)
{
       	int min=i;
for(int k=i-1;k>=0;--k)
{
   if(ptr[k]>ptr[min])
   {
	   int temp=ptr[k];
           ptr[k]=ptr[min];
           ptr[min]=temp;
	   min=k;
   }
}
for(int i=0;i<10;i++)
{
	printf("%d\t",ptr[i]);
}
printf("\n");
}
for(int i=0;i<10;i++)
{
	printf("%d\t",*ptr++);
}
return 0;
}
