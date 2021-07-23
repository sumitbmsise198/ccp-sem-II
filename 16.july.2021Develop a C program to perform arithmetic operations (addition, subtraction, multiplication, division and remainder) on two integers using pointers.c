#include<stdio.h>
void addition ( int *a, int *b, int *c);
void subtraction(int *a, int *b, int *c);
void multiplication(int *a, int *b, int *c);
void remainder(int *a, int *b, int *c);
void divide(int *a, int *b, double *c);
int main()
{
int a, b, add, sub, mult, remain;
double divi;
printf("Enter value of a: ");
scanf("%d", &a);
printf("Enter value of b: ");
scanf("%d", &b);
addition(&a,&b,&add);
printf("\n a + b = %d", add);
subtraction(&a,&b,&sub);
printf("\n a - b = %d", sub);
multiplication(&a,&b,&mult);
printf("\n a * b = %d", mult);
remainder(&a,&b,&remain);
printf("\n a % b = %d", remain);
divide(&a,&b,&divi);
printf("\n a / b = %.2f", divi);
return 0;
}
void addition(int *a, int *b, int *c)
{
*c = *a + *b;
}
void subtraction(int *a, int *b, int *c)
{
    			*c = *a - *b;
}
void multiplication(int *a, int *b, int *c)
{
    			*c = *a * *b;
}
void remainder(int *a, int *b, int *c)
{
    			*c = *a % *b;
}
void divide(int *a, int *b, double *c)
{
    			*c = (double)*a / *b;
}	
