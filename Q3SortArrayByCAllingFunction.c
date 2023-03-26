/*Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]*/
#include<stdio.h>
void sort(int *array,int size)
{
    int i,j,flag;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                flag=array[i];
                array[i]=array[j];
                array[j]=flag;
            }
        }
    }
}
int main()
{
    int arr[10]={7,8,3,4,9,2,1,5,8,10};
    printf("Before Shorting\n");
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    sort(arr,10);
    printf("\nAfter sorting\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}