#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf

main()
{
	int a,b,c,d;
	P("Enter value of a:");
	S("%d",&a);
	P("Enter value of b:");
	S("%d",&b);
	P("Enter value of c:");
	S("%d",&c);
	P("Enter value of d:");
	S("%d",&d);

	if(a>b)
	{
		if(a>d)
		{
			if(a>c)
			{
				P("a is maximum");	
			}
			else
			{
				P("c is maximum");
			}
		}
		else
		{
			P("d is maximum");
		}
	}
	else
	{
		if(b>d)
		{
			if(b>c)
			{
				P("b is maximum");
			}
			else
			{
				P("c is maxmum");
			}
		}
		else
		{
			P("d is maximum");
		}
	}
	getch();
	
}


