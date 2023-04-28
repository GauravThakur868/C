#include<stdio.h>
void main(){
	int array[100], position,c=0,a,value,n;
	printf("enter number in array: \n");
	scanf("%d",&n);
	printf("enter %d elements: \n",n);
	for (c=0;c<n;c++){
		scanf("%d",*array[c]);
	}
	printf("enter the position: ");
	scanf("%d",&position);
	printf("enter value to insert: ");
	scanf("%d",&value);
	for (c=n-1;c>=position-1;c--){
		array[c+1] = array[c];
	}
	array[position-1] = value;
	for (c=0;c<=n;c++){
		printf("%d\n", array[c]);
	}
}