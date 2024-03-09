#include<stdio.h>
#include<math.h>

void main(){
	int n;
	printf("Enter asize of array:");
	scanf("%d",&n);
	int a[n],i=0,sum=0,mult=1;
	float aver,gem,harmo;
	
    for(i=0;i<n;i++){
    	printf("a[%d]:",i);
    	scanf("%d",&a[i]);
       sum=sum+a[i];	
	}
	 for(i=0;i<n;i++){
    	
       mult=mult*a[i];	
	}
	aver=(float)sum/n;
	gem=pow(mult,1/(float)n);
		harmo=((gem)*(gem))/aver;
	printf("%f\n",aver);
	printf("%f\n",gem);
	printf("%f",harmo);
	
}
