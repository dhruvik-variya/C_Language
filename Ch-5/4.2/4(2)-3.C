
#include<stdio.h>
#include<conio.h>

main()
{

	int x,y;
	clrscr();
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);

	printf("%d:",(x*x)+(2*x*y)+(y*y));
	getch();


}


