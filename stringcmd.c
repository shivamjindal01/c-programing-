#include<stdio.h>
#include<string.h>
int main()
{
    // 1 strcpy
    char a[51];
    strcpy(a,"Shivam Jindal");
    printf("%s\n",a);
   
    // 2 strlen
   printf("%d\n",strlen(a));

    // 3 strcmp
    printf("%d\n",strcmp(a,"Shivam Jindal"));

    // 4 strcat
    char x[] = "Shivam";
    char y[] = "Jindal";
    strcat(x,y);
    printf("%s",x);
}
