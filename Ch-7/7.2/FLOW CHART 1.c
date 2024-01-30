#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter value of A : ");
	scanf("%d",&a);
	
	printf("Enter value of B : ");
	scanf("%d",&b);
	
	printf("Enter value of c : ");
	scanf("%d",&c);
	
	printf	("\n");
	if(a<b)
	{
		if(a<c)
		{
			printf("A is minimum");
		}
		else
		{
			printf("C is minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is minimum");
		}
		else
		{
			printf("C is minimum");		
		}
	}
}
