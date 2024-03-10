#include<stdio.h>

void main(){
	int i=0,count=0;
	char a[100];

     printf("Enter a sting\n");
     printf("your string is:");
     gets(a);
	for(i=0;a[i]!='\0';i++){
	    count++;
	}
	printf("string length is:%d",count);
}
