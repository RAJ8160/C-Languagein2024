#include<stdio.h>

void main(){
	int i=0,j=0,a[3][3],countpo=0,countna=0,countzero=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter value of a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d\t",a[i][j]);
				if(a[i][j]<0){
					countna++;
				}
				if(a[i][j]>0){
					countpo++;
				}
			 	if(a[i][j]==0){
					countzero++;
				}
			}
			printf("\n");
			
		}	
     printf("number of positive is:",countpo);
     printf("number of nagative is:",countna);
     printf("number of zero is:",countzero);
}
