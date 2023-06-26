#include<stdio.h>
int first();
int second();
int main(){
	char c = second();
	printf("%c",c);
	return 0;
}
int first(){
	int a;
	scanf("%d",&a);
	if (a>0){
		return a; 
	}
	else {
		return a;
	}
}
int second(){
	int b = first();
	if (b%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
}