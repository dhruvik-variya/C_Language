#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter value of A : ");
	scanf("%d",&a);
	printf("Enter value of B : ");
	scanf("%d",&b);
	
	a = a^b;
	b = b^a;
	a = a^b;
	
	printf("\nA : %d",a);
	printf("\nB : %d",b);
}

