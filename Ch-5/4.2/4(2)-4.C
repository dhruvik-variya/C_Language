#include<stdio.h>
#include<conio.h>

main()

{
	int x, y;
	clrscr();

	printf("enter value of x: ");
	scanf("%d",&x);

	printf("enter value of y: ");
	scanf("%d",&y);

	printf("\nx\t : %d",x);
	printf("\nx\t : %d",y);

	printf("\n(x-y)^2\t : %d",(x*x)-(2*x*y)+(y*y));

	getch();


}