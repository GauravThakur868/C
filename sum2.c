#include<stdio.h>
int sum(int *a,int *b);
int main(){
	
	int a1,b1;
	printf("enter value");
	scanf("%d %d",&a1,&b1);
	int c=sum(&a1,&b1);
	printf("%d",c);
}
int sum(int *a,int *b){
	return *a+*b;
}