#include<stdio.h>

main()
{
	char name[20];
	
	printf("enter your name : ");
	scanf("%[^\n]",&name);
	
	int i , len=0;
	
	for(i=0;name[i] != NULL; i++)
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		if(name[i] >= 'A' && name[i] <= 'Z')
		{
			name[i] = name[i] + 32;
		}
	}
	
	printf("\n\nname\t : %s\n",name);
	
}
