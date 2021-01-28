#include <stdio.h>
#include <conio.h>
void multi(int n,int j);
void main()
{
	int n,j;
	clrscr();
	printf("enter the no.");
		scanf("%d",&n);
		printf("enter the second no");
		scanf("%d",&j);
		multi(n,j);
		getch();
}
		void multi(int n,int j)
		{
			int i=1;
			for(i=1;i<=j;i++)
			{
				printf("%d*%d=%d\n",n,i,(n*i));
				}
			}





