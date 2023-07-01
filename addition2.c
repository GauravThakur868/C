#include<stdio.h>
// addition of 2 1-dimensional array and store value in new array
int main(){
	int x,i;
	printf("size of array: ");
	scanf("%d",&x);
	int a[x],b[x],c[x];
	printf("enter values for first: ");
	for(i=0;i<x;i++){
		scanf("%d",&a[i]);
	}
	printf("enter value for second: ");
	for(i=0;i<x;i++){
		scanf("%d",&b[i]);
	}
	for (i=0;i<x;i++){
		c[i] = a[i]+b[i];
	}
	for(i=0;i<x;i++){
		printf("%d\n",c[i]);
	}
	return 0;