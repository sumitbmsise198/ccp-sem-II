#include <stdio.h>
void print(int arr[], int n);
int min(int arr[],int n);
int max(int arr[],int n);
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter value of element at position no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    print(arr,n);
    int mini=min(arr,n);
    int maxi=max(arr,n);
    int min=arr[mini];
    int max=arr[maxi];
    arr[mini] = max;
    arr[maxi] = min;
    printf("\nAfter changing the highest and lowest numbers in array\n");
    print(arr,n);
    return 0;
}
int max(int arr[],int n){
     int maxi=0;
    int max=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>max){
            maxi=j;
            max=arr[j];
        }
    }
    return maxi;
}
int min(int arr[],int n){
    int mini=0;
    int min=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]<min){
            min = arr[j];
            mini=j;
        }
    }
    return mini;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
