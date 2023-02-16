# Problem-solving
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int str_len(char str[])
{
    int i,l=0;
    for(i=0;str[i]!='\0';i++)
    {
        l+=1;
    }
    return l;
}
int main()
{
    char str[100],l;
    printf("enter string:");
    scanf("%s",str);
    l=str_len(str);
    printf("%d",l);
 return 0;
}
