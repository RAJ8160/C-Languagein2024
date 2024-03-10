#include<stdio.h>

struct employ{
	int roll_no;
	char name[2];
	char colification;
	double address;
}e1;
union Employ{
	int roll_no;
	char name[2];
	char colification;
	double address;
}E1;
void main(){
	int b,c;
	b=sizeof(e1);
	c=sizeof(E1);
	printf("the size of structure is %d\n",b);
	printf("the size of union is %d",c);
}
