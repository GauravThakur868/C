#include<stdio.h>
int num(int n1,int n2,int n3);
int main(){
	int a,b,c;
	printf("enter 3 numbers");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",num(a,b,c));
	return 0;
}
int num(int n1,int n2,int n3){
	if (n1>n2 && n1>n3){
		return n1;
	}
	else if (n2>n1 &&n2>n3){
		return n2;
	}
	else{
		return n3;
	}
}