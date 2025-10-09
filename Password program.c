/*
Name: Beauther Ndemo
REG NO: PA106/G/28704/25
ASSIGNMENT WEEK 4: Password Program
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char password[10];
	
	
	do{
		printf("Enter password: ");
		scanf("%s",password);
		
		
	}while(strcmp(password,"1234")!=0);
	printf("Access Granted\n");
	
	return 0;

}
