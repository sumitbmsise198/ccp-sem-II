#include <stdio.h>
void print(int m, int n);
int main() {
    int m,n;
    printf("enter the value of m and n:\n");
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    if(m>=n){
        printf("NOT POSSIBLE for the given numbers");
    }
    else{
    print(m,n);}
    return 0;
}
void print(int m, int n){
    printf("Even numbers between %d and %d:\n",m,n);
    do{
        if(m%2==0){
            printf(">%d \n", m);
            m=m+1;
        }
        else{
        m=m+1;}
    }while(m<=n);
    return 0;
}
