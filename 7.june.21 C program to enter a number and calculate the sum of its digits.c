#include <stdio.h>
sum(int a);
int main() {
    int a; 
    printf("Enter integer: ");
    scanf("%d", &a);
    sum(a);
    return 0;
}
sum(int a){
    int ans=0;
    do{
        int b = a%10;
        ans = ans+b;
        a = a/10;
    }while(a);
    printf("sum of digits in  is %d",ans);
}
