#include <stdio.h>
int main()
{
float CGPA;
float total = 0;
int counter=0;

while (counter<30)
{
printf("Enter CGPA ");
scanf("%f",&CGPA);
total = total + CGPA ;
counter = counter + 1; 
}
float average ;
average = total /30 ;
printf("Average is %f",average);
return 0;
}