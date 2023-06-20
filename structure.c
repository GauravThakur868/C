#include<stdio.h>
struct person{
	char name[20];
	int age;
	struct student{
		int regno;
	}s;
};
int main(){
	struct person p;
	struct student s;
	printf("enter th values\n");
	scanf("%s",&p.name);
	scanf("%d",&p.age);
	scanf("%d",&p.s.regno);
	printf("%s %d %d",p.name,p.age,p.s.regno);
	return 0;
}