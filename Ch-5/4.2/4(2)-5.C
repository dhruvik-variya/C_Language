#include<stdio.h>
#include<conio.h>

main()

{
	int x,y;
	clrscr();

	printf("enter a value of x :");
	scanf("%d",&x);

	printf("enter a value of y :");
	scanf("%d",&y);

	printf("\nx\t : %d",x);
	printf("\ny\t : %d",y);

	printf("\n(x+y)^3\t : %d",(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y));

	getch();



	getch();
}