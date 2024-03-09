#include<stdio.h>

void main(){
   char op;
   scanf("%c",&op);
   if(op>='a'&&op<='z'){
    printf("this charecter is lower case charecter");
   }
   else if(op>='A'&&op<='Z'){
    printf("this charecter is upper case charecter");
   }
   else if(op>=0&&op<=10){
    printf("this charecter is digit");
   }
   else{
    printf("this charecter is special charecter");
   }
}