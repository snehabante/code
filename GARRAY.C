#include<stdio.h>
#include<conio.h>
int sum(int A[]);
int grater(int A[]);
int lowest(int A[]);
void main()
{
int A[]={2,5,6,7,8,12,34,23,53,23};
int i;
clrscr();
for(i=0;i<10;i++)
{
printf("%d\t\n",A[i]);
}
printf("sum of array %d\n",sum(A));
printf("greatest no of array: %d\n ",gratest(A));
printf("lowest no of array: %d ",lowest(A));
getch();
}
int sum(int A[])
{
int i,sum=0;
for(i=0;i<10;i++)
{
sum+=A[i];

}
return sum ;
}
int gratest(int A[])
{
int i;
int max=0;
for(i=0;i<10;i++)
{
if(A[i]>max)
max=A[i];
}
return max;
}

int lowest(int A[])
{
int i;
int min=999;
for(i=0;i<9;i++)
{
if(A[i]<min)
min=A[i];
}
return min;
}