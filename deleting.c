#include<stdio.h>
int main(){
    int position,a,n;
	printf("enter");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
}
	printf("enter position to be deleted");
	scanf("%d",&position);
	for (int i=position-1;i<n;i++){
		a[i]=a[i+1];
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}