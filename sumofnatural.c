#include<stdio.h>
int sum();
int main(){
	int a =sum();
	printf("%d",a);
	return 0;
}
int sum(){
	int b,c=0,i;
	scanf("%d",&b);
	for (i=1;i<=b;i++){
		c=c+i;
	}
	return c;
}