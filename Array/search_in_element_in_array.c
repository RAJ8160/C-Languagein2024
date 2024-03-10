#include<stdio.h>

void main(){
	int i=0,n,a[n],s,count=0;
	printf("Enter size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter an element of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Which element are you find:");
	scanf("%d",&s);
	for(i=0;i<=n;i++){
		if(a[i]==s){
		count++;
		break;
		}
		}
		if(count==0){
			printf("Element is not present in this array");
		
		}
		else{
			printf("Element is present in this array");
		}
	}
