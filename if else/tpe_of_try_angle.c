#include<stdio.h>
#include<math.h>

void main(){
int a,b,c;
printf("Enter value of fist side of triangle:",a);
scanf("%d",&a);
printf("Enter value of second side of triangle:",b);
scanf("%d",&b);
printf("Enter value of third side of triangle:",c);
scanf("%d",&c);
 if(a==b && b==c && a==c){
    printf("this triangle is isosceles");
 } 
 else if(a==b||b==c||a==c){
    printf("this triangle is equilateral");
 }  
 else if((b*b)+(c*c)==(a*a)||(a*a)+(c*c)==(b*b)||(a*a)+(b*b)==(c*c)){
   printf("this triangle is isosceler");
 }
 else{
   printf("this triangle is scalene");
 }
}