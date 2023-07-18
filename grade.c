#include<stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d \n %d \n %d \n %d \n% d",&a,&b,&c,&d,&e);
	int x = (a+b+c+d+e)/5;
	if (x>=80 && x<=100){
		printf("A");
	}
	else if(x>=60 && x<=79){
		printf("B");
	}
	else if(x>=40 && x<=59){
		printf("C");
	}
	else{
		printf("D");
	}
	return 0;
}