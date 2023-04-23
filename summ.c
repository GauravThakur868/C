#include<stdio.h>
int sum();
int main(){
	int c =sum();
	printf("%d",c);
}
int sum(){
	int a,b;
	printf("enter");
	scanf("%d %d",&a ,&b);
	return a+b;
}