#include<stdio.h>
void main(){
    int position,n,a;
	prinf("enter");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
}
	prinf("enter position to be deleted");
	scanf("%d",&position);
	for (int i=position-1;i<n;i++){
		a[i]=a[i+1];
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}