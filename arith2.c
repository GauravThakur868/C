#include<stdio.h>
void main(){
	int a,b;
	char c;
	printf("enter the choice");
	scanf("%c",&c);
	printf("enter 2 numbers");
	scanf("%d\n%d",&a,&b);
	switch(c){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		default:
			printf("invalid operation");
	}
}