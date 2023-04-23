#include<stdio.h>
void number();
void main(){
	number();
}
void number(){
	int a,count=0;
	printf("enter");
	scanf("%d",&a);
	while(a!=0){
		a = a/10;
		count++;
	}
	printf("%d",count);
}