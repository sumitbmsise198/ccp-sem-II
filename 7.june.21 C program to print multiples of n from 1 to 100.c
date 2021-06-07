#include <stdio.h>
multiple(int a);
int main() {
    int a;
    printf("a = ");
    scanf("%d", &a);
    multiple(a);
    return 0;
}
multiple(int a){
int i=1;   
printf("\n");
do{
    if((i%a) ==0){
printf("%d \n",i); }   
i++;    
}while(i<=100);   
return 0;  
} 
