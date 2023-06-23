#include<stdio.h>
struct person(){
	char name[20];
	int age;
}
void main(){
	struct person p;
	scanf("%s",&p.name);
	scanf("%d",&p.age);
}