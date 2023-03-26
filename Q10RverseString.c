/* Write a program to print a string in reverse using a pointer*/
#include<stdio.h>
#include<string.h>
void reverse(char *s)
{
    int i,l;
    l=strlen(s);
    char temp;
    for(i=0;i<l/2;i++)
    {
        temp=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=temp;
    }
}
int main()
{
    char str[]="himanshu";
    reverse(str);
    printf("%s",str);
    return 0;
}