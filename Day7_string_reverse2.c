# Problem-solving
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int str_rev(char str[])
{
    int i,l=0;
    for(i=0;str[i]!='\0';i++)
    {
        l+=1;
    }
    int temp;
    int s=0;
    int la=l-1;
    for(i=0;i<=l/2;i++)
    {
        temp=str[s];
        str[s]=str[la];
        str[la]=temp;
        s++;
        la--;
    }
    printf("%s",str);    
    for(i=0;i<l;i++)
    {
        printf("%c",str[i]);
    }
}
int main()
{
    char str[100],l;
    printf("enter string:");
    scanf("%s",str);
    str_rev(str);
    return 0;
}
