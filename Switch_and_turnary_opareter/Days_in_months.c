#include<stdio.h>

void main(){
    int a;
    printf("Enter nomber of month:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:printf("There are 31 days in this month");
    break;
    case 4:
    case 6:
    case 9:
    case 11:printf("There are 30 days in this month");
    break;
    case 2:printf("There are 28/29 days in this month");
    default:printf("Enter correct number");
    break;
    }

}