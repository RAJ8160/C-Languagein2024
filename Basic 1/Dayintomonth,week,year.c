#include<stdio.h>

void main(){
  int day,week,year,Day;
  printf("enter number of day:");
  scanf("%d",&day);
  year=day/365;
  day=day-365;
  week=day/7;
  day=day-7;
  day=Day;
  printf("%dyear\n%dweek\n%dDay",year,week,Day);
}