#include <stdio.h>
findsmallest(int a,int b,int c);
print(int a);
int main() {
    int a,b,c;
    printf("Enter the value of\n a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    findsmallest(a,b,c);
    return 0;
}
findsmallest(int a,int  b,int c){
   if(a<b){
       if(a<c){
           print(a);
       }
   }
  else if(b<a){
       if(b<c){
           print(b);
       }
   }
   else{print(c);}
}
print(int a){
    printf("smallest number is %d", a);}
