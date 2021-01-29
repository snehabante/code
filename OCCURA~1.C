
#include <stdio.h>
#include<conio.h>
void occ(int a[]);
void main()
{
int a[]={2,7,8,4,7,5,8,7,3,7};
clrscr();
occ(a);
getch();
}
void occ(int a[])
{
int i,n;
printf("enter find the element");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
if(a[i]==n)
{
printf("enter the occurance element:%d\n",n);
}
}
}