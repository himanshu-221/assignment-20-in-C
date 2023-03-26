/*Write a program to find the maximum number between two numbers using a pointer*/
#include<stdio.h>
int *max(int *ptr1,int *ptr2)
{
    if(*ptr1>*ptr2)
    return ptr1;
    else
    return ptr2;
}
int main()
{
    int a=89,b=98,*maxi;
    maxi=max(&a,&b);
    printf("Maximum is %d",*maxi);
    return 0;
}