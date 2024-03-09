#include<stdio.h>

void main(){
     int a,b,c;
     printf("enter num:",a);
     scanf("%d",&a);
     printf("enter num:",b);
     scanf("%d",&b);
     printf("enter num:",c);
     scanf("%d",&c);
     if(a>b){
        if(a>c){
        printf("a is largest number");
        }
        else{
        printf("c is largest number");
        }
     }
     else{
         if(b>c){
         printf("b is largest number");
         }
         else{
         printf("c is largest number");
         }
        } 
}