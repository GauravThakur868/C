#include<stdio.h>
int main(){
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
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			if (i==j){//((i+j)==n-1)
				printf("%d \n",a[i][j]);
			}
		}
	}
	return 0;
}