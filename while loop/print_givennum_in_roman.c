#include<stdio.h>

void main(){
  int a,i;
  scanf("%d",&a);
  while(a!=0){
   if(a>=1000 && a<=2000){
      printf("M");
      a=a-1000;
  }
  else if(a>=900 && a<=1000){
     printf("CM");
     a=a-900;
  }
  else if(a>=500 && a<=900){
      printf("D");
      a=a-500;
  }
   else if(a>=400 && a<=500){
      printf("CD");
      a=a-400;
  }
   else if(a>=100 && a<=400){
      printf("C");
      a=a-100;
  }
    else if(a>=90 && a<=100){
      printf("XC");
      a=a-90;
  }
   else if(a>=50 && a<=90){
      printf("L");
      a=a-50;
  }
   else if(a>=40 && a<=50){
      printf("XL");
      a=a-40;
  }
   else if(a>=10 && a<=40){
      printf("X");
      a=a-10;
  }
  else if(a>=9 && a<=10){
    printf("IX");
    a=a-9;
  }
   else if(a>=5 && a<=9){
      printf("V");
      a=a-5;
  }
   else if(a>=4 && a<=5){
      printf("IV");
      a=a-4;
  }
    else if(a>=1 && a<=4){
      printf("I");
      a=a-1;
  }
  }
}