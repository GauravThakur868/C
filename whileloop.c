#include<stdio.h>
void main(){
	int a;
	int b =1;
	scanf("%d",&a);
	while (b<11){
		printf("%d X %d = %d\n",a,b,a*b);
		b = b+1;
	}
}