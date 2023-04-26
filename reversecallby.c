#include<stdio.h>
int rev(int *n1);
int main(){
	int a;
	scanf("%d",&a);
	int c = rev(&a);
	printf("%d",c);
}
int rev(int *n1){
	int d,re=0;
	while(*n1!=0){
		d=*n1%10;
		*n1=*n1/10;
		re = re*10+d;
	}
	return re;
}