#include<stdio.h>
#include<conio.h>
void printname(char name[20]);
void main()
{
	char name[20];
	clrscr();
	printf("enter your name");
	scanf("%s",&name);
	printname(name);
	getch();
}

	void printname(char name[])
	{
		int i;
		for(i=1;i<=20;i++)
		{
			printf("%d\t%s\n",i,name);
		}
	}