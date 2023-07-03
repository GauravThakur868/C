#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c=0,d,count;   
	printf("enter the number=");    
	scanf("%d",&a);    
	d=a;
    while(a!=0){
	a/10;
	count=count+1;
	}
	printf("%d",count);
	while(a>0)    
	{    
	b=a%10;    
	c=c+pow(b,count);    
	a=a/10;    
	} 
	if(d==c)    
	printf("armstrong  number ");    
	else    
	printf("not armstrong number"); 
	return 0;
}