/*Write a program to print the elements of an array in reverse order*/
#include<stdio.h>
void reverse(int *x,int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
        printf("%d\t",x[i]);
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    printf("Printing array elements in reverse order\n");
    reverse(arr,10);
}