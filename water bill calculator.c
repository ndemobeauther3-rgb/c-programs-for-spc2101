/*Name: Beauther ndemo kongo
registration number: PA106/G/28704/25
ASSIGNMENT week 3: Water Bill Calculator
DATE: 29/9/2025*/

#include<stdio.h>
int main()
{
int units;
float bill;
 
 // input//
 printf("Enter number of units used: ");
 scanf("%d", & units);
  
  //calculation//
  if(units <=30)
  	bill= units * 20;
  else if(units <=60)
  	bill = units * 25;
  else
  {
	  bill= units * 30;
  }

 // output// 	
printf("Total bill: %.2f Kes\n", bill );

return 0;	
	
	
}
