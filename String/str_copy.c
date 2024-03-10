#include<stdio.h>

void strleanth(char arr[]);

void main(){
	char arr[100];
	printf("Enter a size of a string:");
	gets(arr);
//	printf("%s",arr);
	strleanth(arr);
}
void strleanth(char arr[]){
	int i,count=0;
	for(i=0;arr[i]!='\0';i++){
		printf("%d %c \n",i,arr[i]);
		count++;
	}
	printf("\n");
	printf("The lanth of string is %d",count);
}
