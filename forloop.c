#include<stdio.h>
int main(){
	int a,i;
	int b = 1;
	scanf("%d",&a);
	for (i=1;i<=a;i++){
		b = b*i;
	}
	printf("%d",b);
	return 0;
}