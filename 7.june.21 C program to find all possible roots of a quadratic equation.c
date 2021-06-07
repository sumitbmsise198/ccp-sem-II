#include <stdio.h>
getroot(int a,int b,int c);
int main() {
    int a,b,c;
    printf("Enter value of a, b, c such that 'a' is coefficient of x^2 ,'b' is coefficient of x and 'c' is a constant.\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    getroot(a,b,c);
    return 0;
}
getroot(int a,int b,int c){
    double d,r1,r2,ip,rp;
    d = ((b*b)-(4*a*c));
    if(d==0){
        r1 = (-b)/(a);
        printf("roots are r1 = r2 = %.2f", r1/2);
    }
    else if(d>0){
        r1 = (((-b)+(sqrt(d)))/(2*a));
        r2 = (((-b)-(sqrt(d)))/(2*a));
        printf("roots are:\n");
        printf("r1 = %.2f \n",r1);
        printf("r2 = %.2f",r2);
    }
    else{
        rp =(-b)/(2*a);
        ip =sqrt(-d)/(2*a);
        ip=sqrt(ip*ip);
        printf("r1 = %.2f - i%.2f\n", rp,ip);
        printf("r2 = %.2f + i%.2f", rp,ip);
    }
}
