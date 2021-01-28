#include <stdio.h>
#include <conio.h>
void even(int n,int no);
void main()
{
	int n, no;
	clrscr();
	printf("enter starting no");
	scanf("%d",&n);
	printf("enter ending no:");
	scanf("%d",&no);
	even(n,no);
	getch();
}
void even(int n,int no)
{
int sum=0;
while(n<=no)
{
	if(n%2==0)
	printf("\n%d",n);
		sum=sum+n;
		n++;
		}
		printf("\nsum of evenno.%d\n",sum);

}
