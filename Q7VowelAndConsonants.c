/*Write a program to count the number of vowels and consonants in a string using a
pointer.
*/
#include<stdio.h>
void count(char *str)
{
    int i,vowel=0,con=0;
    printf("The string is case sensitive and did't contain any digit\n");
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        {
            vowel++;
        }
        else if(str[i]==' ')
        {
            continue;
        }
        else
        con++;
    }
    printf("number of Vowel is %d",vowel);
    printf("\nnumber of consonants is %d",con);
}
int main()
{
    char string[]="the fox is climbing on the tree";
    count(string);
    return 0;
}