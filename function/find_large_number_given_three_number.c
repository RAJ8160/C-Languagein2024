#include<stdio.h>

void larg(float,float,float);
void main(){
	float a,b,c;
	printf("Enter three floating point number:");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	larg(a,b,c);
}
void larg(float a,float b,float c){
	  if(a>b){
	  	if(a>c){
	  		printf("%f is largest number",a);
		  }
		  else{
		  	printf("%f is largest number",c);
		  }
	  }
	  else{
	  		if(b>c){
	  		printf("%f is largest number",b);
		  }
		  else{
		  	printf("%f is largest number",c);
		  }
	  }	
}
