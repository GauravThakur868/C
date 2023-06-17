#include<string.h>
int main(){
	char st[]="123#ab0";
	char st1[10];
strncpy(st1,st,3);
strcpy(st1,st);
printf("%s",st1);
printf("%d\n",strlen(st1));
strcat(st1,st);
printf("%s\n",st1);
printf("%d",strcmp(st1,st,2));
return 0;
}