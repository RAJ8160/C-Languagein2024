//Read marks of five subjects. Calculate percentage and print class accordingly. Fail below 35, Pass Class
//between 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 
//70

#include<stdio.h>

void main(){
    int a;
    printf("Enter your persenteg:",a);
    scanf("%d",&a);
    if(a>=35&& a<=45){
      printf("you are pass");
    }
    else if(a>=46&&a<=60){
     printf("you are second class");
    }
    else if(a>=61&&a<=70){
      printf("you are first class");
    }
    else if(a>=70){
      printf("you are get A1 ");
    }
    else{
      printf("better luck next time");
    }
}
    