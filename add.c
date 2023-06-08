#include<stdio.h>
int main(){
	int a = 9;
	int c = ++a + a++;
	printf("%d , %d",c,a);
	return 0;
}