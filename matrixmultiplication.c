#include<stdio.h>
int main()
{
   int A[3][3];
   int B[3][3];
   int i,j;
   int sum =0;
   for(i=0;i<3;i++)
   {
     for(int k=0;k<3;k++)
     {
      sum =0;
        for(j=0;j<3;j++)
         {
            sum = sum + (A[i][j])*(B[j][k]);
         }
        
         printf("%d ",sum);
    
      }
      printf("\n");
   }
return 0;
}
