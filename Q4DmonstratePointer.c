/*Write a program in C to demonstrate how to handle the pointers in the program*/
#include<stdio.h>
void ptr1(int *ptr)
{
    int temp=5;
    *ptr=temp;
}
void ptr2(int *ptr)
{
    ptr1(ptr);
}
int main()
{
    int x=10;
    ptr2(&x);
    printf("Changing value of X calling function X = %d",x);
    //printf()
    return 0;
}