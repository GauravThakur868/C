#include<stdio.h>
int main(){
	int a = 3;
	int b = 4;
	int c = a+b;
	int d = a-b;
	int e = a*b;
	int f = a/b;
	int g =- a%b;
	printf("%d + %d = %d\n",a,b,c);
	printf("%d - %d = %d\n",a,b,d);
	printf("%d * %d = %d\n",a,b,e);
	printf("%d / %d = %d\n",a,b,f);
	printf("%d",g);
    return 1;
}