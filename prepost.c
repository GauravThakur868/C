#include<stdio.h>
int main(){
	int a = 5;
	int b = a++;
	int d = 9;
	int c = ++d;
	printf("%d , %d\n",b,a);
	printf("%d , %d",c,d);
	return 0;
}