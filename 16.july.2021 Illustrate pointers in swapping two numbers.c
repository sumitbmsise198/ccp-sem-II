#include <stdio.h>
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}
int main()
{
    int n1,n2;
    printf("Enter value of n1: ");
    scanf("%d",&n1);
    printf("Enter value of n2: ");
    scanf("%d",&n2);
    printf("Before Swapping: n1 is: %d, num2 is: %d\n",n1,n2);
    swap(&n1,&n2);
    printf("After  Swapping: n1 is: %d, num2 is: %d\n",n1,n2);
    return 0;
}
