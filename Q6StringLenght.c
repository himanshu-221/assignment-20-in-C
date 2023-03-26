/*Write a program to calculate the length of the string using a pointer*/
#include<stdio.h>
int lenght(char *str)
{
    int i,len=0;
    for(i=0;str[i]!='\0';i++)   //ounting space also
    {
        len++;
    }
    return len;
}
int main()
{
    char name[]="deepak kumar";
    int len;
    len=lenght(name);
    printf("Lenght of the string is %d",len);
    return 0;
}