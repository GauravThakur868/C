#include<stdio.h>
void main(){
	int n,m;
	printf("enter the no of rows: ");
	scanf("%d",&n);
	printf("enter the no of columns: ");
	scanf("%d",&m);
	int a[n][m],i,j;
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[j][i]);
		}printf("\n");
	}
}