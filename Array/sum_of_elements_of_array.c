#include<stdio.h>

void main (){
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n],i,sum=0,aver,count=0;
	for(i=0;i<n;i++){
		printf("Enter a element of a[%d]:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	//	for(i=0;i<n;i++){
	//	sum=sum+a[i];
//	}
	aver=sum/n;
	for(i=0;i<n;i++){
		if(a[i]>aver){
			count=count+1;
		}
	}
	printf("count=%d",count);
}
