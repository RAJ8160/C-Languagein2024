#include<stdio.h>

void main(){
	int i=0,n,a[n],countn=0;
	printf("Enter size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter an element of a[%d]:",i);
		scanf("%d",&a[i]);
		if(a[i]<0){
			countn=countn+1;
		}
	}
	printf("countn=%d",countn);
}
