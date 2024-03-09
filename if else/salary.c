//2. Enter basic salary of an employee and calculate Gross salary according to given conditions:
// Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
// Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
// Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic
#include<stdio.h>

void main(){
  int salary,DA,HRA;
  printf("Enter your salary:");
  scanf("%d",&salary);
  if(salary>=10000 && salary<=20000){
   HRA=(20*salary)/100;
   DA=(80*salary)/100;
        printf("HRA=%d\nDA=%d\n",HRA,DA);
     } 
  else if(salary>=20000  && salary<30000){
   HRA=(25*salary)/100;
   DA=(90*salary)/100;
        printf("HRA=%d\nDA=%d\n",HRA,DA);
     } 
  else if(salary>=30000 && salary<40000){
      HRA=(30*salary)/100;
      DA=(95*salary)/100;
        printf("HRA=%d\nDA=%d\n",HRA,DA);
     }
}      