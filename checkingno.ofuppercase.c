#include<stdio.h>
int main()
{  
      int i =0,j=0;
    char sent[101];
    scanf("%[^\n]",&sent);

    while(sent[i]!='\0')
    {
         if(sent[i]>='A' && sent[i]<='Z')
            j++;
    i++;
    }
    printf("%d",j);
    return 0;

}
