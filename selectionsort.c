#include<stdio.h>
#include <stdlib.h>
#include<string.h>


int main (void)
{
int *ptr=(int*)malloc(sizeof(int)*10);
printf("enter values in the array");
for(int i=0;i<10;i++)
{
	scanf("%d",&ptr[i]);
}
for(int i=0;i<10;++i)
{
int min=i;
for(int k=i+1;k<10;++k)
{
   if(ptr[min]>ptr[k])
	   min=k;
}
int temp=ptr[min];
ptr[min]=ptr[i];
ptr[i]=temp;
}

for(int i=0;i<10;i++)
{
	printf("%d\t",*ptr++);
}
return 0;
}
