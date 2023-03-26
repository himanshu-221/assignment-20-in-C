/*Write a function to swap strings of two char arrays of calling functions.*/
#include<stdio.h>
#include<string.h>
void swap(char *s1,char *s2)
{
    char temp[10];
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
}
int main()
{
    char str1[]="home",str2[]="apartment";
    printf("Before swaping\nstring1 = %s and string2 = %s\n",str1,str2);
    swap(str1,str2);
    printf("After swaping\nstring1 = %s and string2 = %s",str1,str2);
    return 0;
}