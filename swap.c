#include<stdio.h>
int main(){
	int a,b,c=0;
	printf("enter vlaue of a: ");
	scanf("%d",&a);
	printf("enter value of b: ");
	scanf("%d",&b);
	c = a;
	a = b;
	b = c;
	printf("a = %d ",a);
	printf("b = %d ",b);
}