#include<stdio.h>

void main(){
    char c;
    scanf("%c",&c);
  do{
      printf("%c",c);
    }while( c >='A'&& c='Z'||c >='a'&& c<='z');
}