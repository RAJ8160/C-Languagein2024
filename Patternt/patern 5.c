#include<stdio.h>

void main(){
	int i,n,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	  for(j=1;j<=i;j++){
	  	sum=sum+j;
	  }  
}
printf("%d",sum);
}
