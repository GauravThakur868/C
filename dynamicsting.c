#include<stdio.h>	
int main(){
    char c;
	char *c(char*)malloc(10*sizeof(char));
	scanf("%s",c);
	c = (char*)realloc(c,strlen(c));
	printf("%s",c);
	return 0;
}