#include<stdio.h>
#include<string.h>
void palindrome()
{
    char a[5];
    int i,n,t=0;
    printf("enter the string \n");
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==a[strlen(a)-i-1])
            t=1;
    }
    if(t==1)
        printf("its palindrome\n");
    else
        printf("its not\n");
   // return 0;
}
