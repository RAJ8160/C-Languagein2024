#include<stdio.h>
#include<math.h>

void main(){
	int i,j,e,ans=1;
	float sum=1;
	scanf("%d",&e);
	for(i=1;i<=e;i++){
		for(j=1;j<=i;j++){
		   ans=ans*j;
		}
		sum=sum+(1/(float)ans);
		ans=1;	
	}
	printf("%f",sum);
}
