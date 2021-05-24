#include <stdio.h>
double area(double a, double b, double c);
int main() {
    double a, b, c, ans;
    printf(" Enter the sides of the triangle:-");
   scanf("%lf%lf%lf", &a, &b, &c);
    ans = area(a,b,c);
    printf("Area = %1f",ans);
    return 0;
}
double area(double a, double b, double c){
    double res,s;
    s= (a+b+c)/2;
    res = sqrt(s*(s-a)*(s-b)*(s-c));
    return res;
}
