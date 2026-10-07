#include<stdio.h>
int main()
{
    int a[20];
    int i,k,temp;
    int sum =0;
    for(i=0;i<20;i++)
   {   
       sum = sum + a[i];
   }
   printf("The average is %d",sum/100);
     
   for(i=0;i<20;i++)
   {
     for(k=i+1;k<20;k++)
       {
        if(a[i]>a[k])
        {
            temp=a[i];
            a[i] = a[k];
            a[k]=temp;
        }
       }
   }  

   printf("Median of array is %d",(a[10]+a[11])/2 );

   int mode;
    int freq=0;
    int freqnew;
     
    for(i=0;i<20;i++)
    {
        freqnew = 0;
        for(k=0;k<20;k++)
         {
            if(a[i]=a[k])
            {
              freqnew++;
            }
         }
        if(freqnew>freq)
        {
          mode=a[i];
          freq=freqnew;
        }

    }
}
