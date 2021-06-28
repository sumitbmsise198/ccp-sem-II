#include <stdio.h>
void print(int arr[2][3]);
void main()
{
	int a[2][3],b[2][3],c[2][3];
	printf("\nENTER VALUES FOR MATRIX A:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);}}
	printf("\nENTER VALUES FOR MATRIX B:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&b[i][j]);}}
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];}}
	    print(c);
}
void print(int arr[2][3]){
    printf("\nThe new matrix is:\n");
	for(int i=0;i<2;i++)
        {
		for(int j=0;j<3;j++){
			printf("%d\t",arr[i][j]);}
		printf("\n");
	}
}
