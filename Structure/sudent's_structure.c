#include<stdio.h>
	
	struct student{
		char name[100];
		int age;
		float percentage;
	};
	void main(){
		struct student s[5];
		int i;
		for(i=0;i<5;i++){
			printf("enter name of s[%d]=",i);
			scanf("%s",s[i].name);
			printf("enter age of s[%d]=",i);
			scanf("%d",&s[i].age);
			printf("enter percentage of s[%d]=",i);
			scanf("%f",&s[i].percentage);
		}
		for(i=0;i<5;i++){
			printf("\nname of student s[%d]=%d",i,s[i].name);	
			printf("\nname of student s[%d]=%d",i,s[i].age);	
			printf("\nname of student s[%d]=%d",i,s[i].percentage);	
	}
}

