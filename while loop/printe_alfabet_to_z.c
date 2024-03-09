#include<stdio.h>

void main(){
   char i;
   scanf("%c",&i);
   if(i>='a'&&i<='z'){
   while(i<='z'){
   printf("%c,",i);
   i++;
   }
}
else{
while(i>='A'&&i<='Z'){
   printf("%c,",i);
   i++;
}
}
}