/*Write a program to compute the sum of all elements in an array using pointers.*/
#include<stdio.h>
int sum(int *x,int size)
{
    int i,total=0;
    for(i=0;i<size;i++)
    {
        total+=x[i];
    }
    return total;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,8,7,9,10};
    int total=0;
    total=sum(arr,10);
    printf("Sum of array element is %d\n",total);
    return 0;
}