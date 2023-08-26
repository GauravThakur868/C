#include<stdio.h>
int main(){
	int n;
	int a=1;
	int b=0;
	scanf("%d",&n);
	while (a<n+1){
		b = b+a;
		a++;
	}
	printf("%d",b);
}