#include<stdio.h>
int main()
{
  int i;
  int N;
  int j=0;
  printf("Enter the no. ");
  scanf("%d", &N);
 for(i=2;i<N;i++)
 {
  if(N%i != 0)
  j=j+1;
      
}
if(j==(N-2))
printf("Prime");
else
printf("non prime");
return 0;
}
