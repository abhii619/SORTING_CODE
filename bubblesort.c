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
for(int k=0;k<10;++k)
{
   if(ptr[k]>ptr[k+1])
   {int temp=ptr[k];
ptr[k]=ptr[k+1];
ptr[k+1]=temp;
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
	printf("-%d\t",*ptr++);

}
return 0;
}
