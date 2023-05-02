#include<stdio.h>
struct student{
	char name[20];
	int regno;
	float marks[3];
};
void cal(struct student s){
	int i;
	float sum ,a;
	for(i=0;i<3;i++){
		sum += s.marks[i];
	}
	a = (sum/3)*100;
	printf("%f",a);
}
int main(){
	struct student stud;
	scanf("%f",&stud.marks);
	cal(stud);
}