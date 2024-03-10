#include<stdio.h>

void main(){
	int n,max;
	printf("Enter number of element:");
	scanf("%d",&n);
	int arr[n],i=0,sum=0,aver,min;
	for(i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++){
       if(arr[i]>max){
       	   max=arr[i];
	   }
	   if(arr[i]<min){
	   	   min=arr[i];
	   }
       sum=sum+arr[i];
	}
	aver=sum/n;
	printf("sum=%d\n",sum);
	printf("aver=%d\n",aver);
	printf("max=%d\n",max);
	printf("min=%d\n",min);
}
