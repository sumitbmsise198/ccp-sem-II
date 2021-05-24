#include <stdio.h>
int avg(int a, int b,int c);
int main() {
    int a, b, c, ans;
    printf("Enter the three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    printf("the average of three number is %d",avg(a,b,c));
    return 0;
}
int avg(int a, int b, int c){
    int res;
    res = (a+b+c)/3;
    return res;
}
