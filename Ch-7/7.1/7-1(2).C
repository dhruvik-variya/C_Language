#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&a);

	if(a>0)
	{
		printf("%d positive number!!",a);

	}
	else if(a<0)
	{
		printf("%d nagetive number!!",a);
	}
	else
	{
		printf("nuteral!!");
	}

	getch();
}

