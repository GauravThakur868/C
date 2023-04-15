#include<stdio.h>
void main(){
	int a = 1;
	int b = 2;
	int c ;
	printf("%d , %d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("%d , %d",a,b);
}