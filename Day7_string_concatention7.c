# Problem-solving
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void concat(char s1[],char s2[])
{
    int i,l1,l2,c=0;
    l1=strlen(s1);
    l2=strlen(s2);
    // printf("%d",l1);
    for(i=l1;i<l1+l2;i++)
    {
        s1[i]=s2[c];
        c++;
    }
    printf("%s",s1);
}
int main()
{
    char s1[100],s2[100];
    puts("enter first string: ");
    gets(s1);
    puts("enter second string: ");
    gets(s2);
    concat(s1,s2);
 return 0;
}
