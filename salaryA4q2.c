#include<stdio.h>
int main()
{
   int s;
   int b[9] ={0};
   int i,j;
   for(i=0;i<25;i++)
    {
        scanf("%d",&s);
        if(s>=200&&s<=1000)
        {
        j=s/100;
        b[j-2]++;
        }
        else if (s<200)
          printf("this amount will not be considered \n");
        else if(s>1000)
          b[8]++; 
    }

    for(i=0;i<8;i++)
      printf("People having income between %d and %d are %d \n",(i+2)*100,(i+2)*100+99,b[i] );

    printf("People having income more than 1000 are %d",b[8]);

}
