/*
Name: Beauther Ndemo
REG NO: PA106/G/28704/25
ASSIGNMENT WEEK 4: ATM Withdrawal Program
*/
#include <stdio.h>
int main()
{
	float balance, withdraw;
	//prompt the user to enter initial balance//
	printf("Enter initial balance: ");
	scanf("%f",& balance);
	
	while(balance > 0)
	{
	printf("Enter amount to withdraw: ");	
	scanf("%f",& withdraw);
	balance-=withdraw;
	printf("Remaining balance: %2f\n",balance);
	}
	
	printf("Account balance is zero or negative.\n");
	return 0;

}
