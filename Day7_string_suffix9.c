# Problem-solving
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void suffix(char str[])
{
    int i,j;
    int l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        for(j=i;j<=l;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    suffix(str);
 return 0;
}
