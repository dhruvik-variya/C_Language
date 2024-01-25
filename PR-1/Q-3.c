#include<stdio.h>

main()
{
	float A,B,C;
	
	printf("Enter Angle A : ");
	scanf("%f",&A);
	printf("Enter Angle B : ");
	scanf("%f",&B);
	
	C = 180 - (A + B);
	
	printf("Angle C : %.2f",C);
	
}
