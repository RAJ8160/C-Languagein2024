#include<stdio.h>

void strcomper(char arr1[],char arr2[]);

void main(){
	char arr1[100],arr2[100];
	printf("Enter  a string1:",arr1);
	gets(arr1);
	printf("Enter a  string2:",arr2);
	gets(arr2);
//	printf("%s",arr);
	strcomper(arr1,arr2);
}
void strcomper(char arr1[],char arr2[]){
    int i,flag=0;

	for(i=0;arr1[i]!='\0'||arr2[i]!='\0';i++){
		if(arr1[i]!=arr2[i]){
		flag++;
		}
	}
	if(flag==0){
		printf("String are same");
	}
	else{
		printf("String arenot  same");
	}

}
