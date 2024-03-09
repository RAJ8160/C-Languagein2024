#include<stdio.h>

void main(){
   char ap;
   printf("Enter Caracter what you want:");
   scanf("%c",&ap);
   while(ap>='a'&& ap<='z'||ap>='A' && ap<='Z'){
   printf("%c",&ap);
   ap++;
   }
}