#include <stdio.h>
void print(int n);
int main() {
    int n;
    printf("Enter the value of n:  ");
    scanf("%d", &n);
    print(n);
    return 0;
}
void print(int n){
    int ans =0;
    int i=1;
    for(int j=0;j<n;j++){
        ans = ans + (i*i);
        i=i+2;
    }
    printf("Sum of first %d numbers is  %d",n,ans);
}
