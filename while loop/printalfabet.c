#include<stdio.h>

void main(){
    char i;
    scanf("%c",&i);
    if(i=='A'){
    while(i<='Z'){
      printf("%c\n",i);
     i++;
    }
}
else{
    while(i<='z'){
      printf("%c\n",i);
     i++;
    }
}
}