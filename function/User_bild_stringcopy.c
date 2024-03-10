#include<stdio.h>

void strcopy(char arr1[],char arr2[]);

void main(){
	char arr1[100],arr2[100];
	printf("Enter a size of a string:",arr1);
	gets(arr1);
	printf("Enter a size of a string:",arr2);
	gets(arr2);
//	printf("%s",arr);
	strcopy(arr1,arr2);
}
void strcopy(char arr1[],char arr2[]){
	int i;
//	for(i=0;arr1[i]!='\0';i++){
//	   arr1[i]=;
//	}
	for(i=0;arr1[i]!='\0';i++){
	   arr1[i]=arr2[i];
	}
	printf(" sring2 copied in sring1 is %s",arr1);
}
