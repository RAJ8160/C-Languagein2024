#include<stdio.h>

void main(){
	FILE *f1;
	char ch[100];
	f1=fopen("r123.txt","w");
	scanf("%s",ch);
	fprintf(f1,ch);
	

	fclose(f1);
}
