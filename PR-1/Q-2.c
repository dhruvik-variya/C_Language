#include<stdio.h>

main()
{
	float base_salary,HRA,DA,TA,Total_Salary=0;
	
	printf("Enter your Base salary : ");
	scanf("%f",&base_salary);
	
	HRA = base_salary *10/100;
	DA = base_salary *5/100;
	TA = base_salary *8/100;
	Total_Salary = base_salary + HRA + DA + TA;
	
	printf("Total Salary : %.2f",Total_Salary);
	
	
}
