#include<stdio.h>
struct emp{
	char name[20];
	int empid;
	float salary;
};
void display(struct emp e){
	printf("%s\n",e.name);
	printf("%f\n",e.salary);
	printf("%d\n",e.empid);
}
int main(){
	struct emp ep;
	scanf("%s",&ep.name);
	scanf("%d",&ep.empid);
	scanf("%f",&ep.salary);
	display(ep);
}