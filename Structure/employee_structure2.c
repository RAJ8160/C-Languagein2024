#include<stdio.h>

struct employee{
   char name[100];
   int salary;
   int age;
   char colification[100];
};
void main(){
	int i;
	struct employee t;


	printf(" Enter age of employee:");
	scanf("%d",&t.age);
	printf(" Enter salary of employee:");
	scanf("%d",&t.salary);
	printf("Enter name of employee:");
	scanf("%s",&t.name);
	printf("Enter colification of employee:");
	scanf("%s",t.colification);
	printf("Age of employee:%d\n",t.age);
	printf("Salary of employee:%d\n",t.salary);
	printf("Name of employee:%s\n",t.name);
	printf("Colification of employee:%s\n",t.colification);

}
