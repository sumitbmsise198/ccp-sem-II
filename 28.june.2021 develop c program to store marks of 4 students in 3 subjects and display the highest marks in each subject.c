#include <stdio.h>
int get(int arr[4][3], int i);
void print(int arr[4][3]);
int main() {
    int sub[4][3];
    for(int i=0;i<4;i++){
        printf("Enter marks of Student No.%d \n\t",i+1);
        for(int j=0;j<3;j++){
            printf("Enter marks in subject no.%d = ",j+1);
            scanf("%d",&sub[i][j]);
            
        }
        printf("\n");
    }
    print(sub);
    return 0;
}
int get(int arr[4][3], int i){
    int max=arr[0][i];
    int mini=0;
    for(int j=1;j<4;j++)
    {
        if(arr[j][i]>max){
            max = arr[j][i];
            mini=j;
        }
    }
    return mini;
}
void print(int arr[4][3]){
    for(int i=0;i<3;i++){
       int x = get(arr,i);
       printf("Student No.%d got highest in subject No.%d which is: %d marks.\n",x+1,i+1,arr[x][i]);
    }
}
