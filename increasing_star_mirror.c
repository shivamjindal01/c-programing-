#include<stdio.h>
int main()
{
int i;
int j;
int k;
int n;
scanf("%d",&n)

for(i=1,i<=n;i++)
{
    for(j=(n-i);j>=1;j--)
     printf(" ");

    for(k=1;k<=i;k++)
        printf("*");

}
return 0;


}
