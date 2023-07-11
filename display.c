#include<stdio.h>
int main(){
	int size,i;
	scanf("%d",&size);
	int a[size],b[size];
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<size;i++){
		b[i]=a[i]*2;
	}
	for (i=0;i<size;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	for (i=0;i<size;i++){
		printf("%d",b[i]);
	}
	return 0;
}