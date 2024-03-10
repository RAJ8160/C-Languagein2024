#include<stdio.h>

void main(){
	int hight[5],weight[5],np=0,i=0;
	for(i=0;i<5;i++){
		printf("hight[%d] of person:",i);
		scanf("%d",&hight[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("weight[%d] of person:",i);
		scanf("%d",&weight[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
	if(hight[i]>170&&weight[i]<50){
		np=np+1;
	}
}
printf("np=%d",np);
}
