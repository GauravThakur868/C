#include<stdio.h>
int num(int n1);
int main(){
	int a;
	scanf("%d",&a);
	num(a);
}
int num(int n1){
	if (n1==1){
		printf("one");
	}
	else if (n1==2){
		printf("two");
	}
	else if (n1==3){
		printf("three");
	}
	else if (n1==4){
		printf("four");
	}
	else if (n1==5){
		printf("five");
	}
	else if (n1==6){
		printf("six");
	}
	else if (n1==7){
		printf("seven");
	}
	else{
		printf("%d",n1);
	}
}