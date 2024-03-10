#include<stdio.h>

struct book{
   char title[100];
   char author[100];
   char publication[100];
   float prise ;
   
};
void main(){
	
	struct book b1,b2,b3;
	printf(" Enter title of book:");
	scanf("%s",b1.title);
	printf(" Enter name of author:");
	scanf("%s",b1.author);
	printf("Enter name of publication:");
	scanf("%s",b1.publication);
	printf("Enter prise of book:");
	scanf("%f",&b1.prise);
    printf(" Enter title of book:%s\ngs",b1.title);
	printf(" Enter name of author:%s\n",b1.author);
	printf("Enter name of publication:%s\n",b1.publication);
	printf("Enter prise of book:%f\n",b1.prise);
		printf(" Enter title of book:");
	scanf("%s",b2.title);
	printf(" Enter name of author:");
	scanf("%s",b2.author);
	printf("Enter name of publication:");
	scanf("%s",b2.publication);
	printf("Enter prise of book:");
	scanf("%f",&b2.prise);
    printf(" Enter title of book:%s\n",b2.title);
	printf(" Enter name of author:%s\n",b2.author);
	printf("Enter name of publication:%s\n",b2.publication);
	printf("Enter prise of book:%f\n",b2.prise);
	printf(" Enter title of book:");
	scanf("%s",b3.title);
	printf(" Enter name of author:");
	scanf("%s",b3.author);
	printf("Enter name of publication:");
	scanf("%s",b3.publication);
	printf("Enter prise of book:");
	scanf("%f",&b3.prise);
    printf(" Enter title of book:%s\n",b3.title);
	printf(" Enter name of author:%s\n",b3.author);
	printf("Enter name of publication:%s\n",b3.publication);
	printf("Enter prise of book:%f\n",b3.prise);
	
}
