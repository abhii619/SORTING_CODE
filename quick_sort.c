


#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int partition(int ,int);
void quicksort(int , int);
int *ptr;
int main (void)
{
	ptr=(int*)malloc(sizeof(int)*11);
printf("enter values in the array");
for(int i=0;i<10;i++)
{
	scanf("%d",&ptr[i]);
}
int left=0,right=10;
quicksort(left,right);
for(int i=0;i<10;++i)
{
printf("%d\t",ptr[i]);
}
return 0;
}

void quicksort(int left,int right)
{int j;
	if(left<right)
	{
		 j=partition(left,right);
                for(int i=0;i<10;++i)
{
printf("%d\t",ptr[i]);
}
printf("\n");
		quicksort(left,j);
		quicksort(j+1,right);
	}
}
int partition(int left,int right)
{
int pivot=ptr[left];
int i=left,j=right;
while(i<j)
{
do
{
	++i;
}while(ptr[i]<=pivot);
do{
	--j;
}while(ptr[j]>pivot);
if(i<j)
{int temp=ptr[i];
ptr[i]=ptr[j];
ptr[j]=temp;
}

}
int temp=ptr[left];
ptr[left]=ptr[j];
ptr[j]=temp;
return j;
}
