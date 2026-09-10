#include<stdio.h>
int main()
{
int i;
int j;
int num;
printf("Enter the number of lines you want the stars to appear  ");
scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf("*");
      }
        printf("\n");
    }
   
   return 0;
 
}