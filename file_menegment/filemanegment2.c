#include<stdio.h>


void main(){
	FILE *f1;
	char ch;
	f1=fopen("20a1.c","r");
	do{
		ch=getc(f1);
		putchar(ch);
	}
	while(ch!=EOF);
	fclose(f1);

