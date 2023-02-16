# Problem-solving
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void str_v(char str[])
{
    int i,count=0;
    // n=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count+1);
}
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    str_v(str);
 return 0;
}
