#include<stdio.h>
void main(){
	int a;
	int b=1;
	int c=0;
	scanf("%d",&a);
	while (b<a){
		if (a%b==0){
			c = c+b;
		}
		b++;	
	}	
	if (c==a){
	
		printf("perfect");
	}
	else{
		printf("not perfect");
	}
	
}