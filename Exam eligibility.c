/* Name : Beauther ndemo kongo
Registration number: Pa106/g/28704/25
ASSIGNMENT WEEK 4:exam elligibility program*/

#include<stdio.h>
int main()
{
float attendance, marks;
//input//
printf("Enter attendance percentage: ");
scanf("%f", &attendance);

printf("enter your average marks: ");
scanf("%f", &marks);

//check eligibility//
if(attendance >=75 && marks >=40)
	printf("Eligible for exam.\n");
else
	printf("not eligible.\n");

return 0;
	
	
	
	
}