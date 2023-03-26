/* Write a function to swap values of two in variables of calling function.
*/

#include<stdio.h>
void swap(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;

}
int main()
{
    int x=10,y=9;
    printf("Before swaping\nX=%d and Y=%d",x,y);
    swap(&x,&y);
    printf("\nAfter swaping\nX=%d and Y=%d",x,y);
    return 0;
}