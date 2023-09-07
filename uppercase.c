#include<stdio.h>
int main(){
	
char a[100];
   int i = 0;

   printf("Enter a string: ");
   scanf("%s", &a);

   while (a[i]) {
      if (a[i] >= 'a' && a[i] <= 'z') {
         a[i] = a[i] - 32;
      }
      i++;
   }
   printf("Uppercase: %s", a);
}