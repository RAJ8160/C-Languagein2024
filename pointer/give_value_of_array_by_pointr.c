#include<stdio.h>

void main(){
int n;
printf("Enter a size of array:");
scanf("%d",&n);
int a[n],i,*ptra;
for(i=0;i<n;i++){
	printf("Enter an element of a[%d]:",i);
	scanf("%d",&a[i]);

}
ptra=&a[0];
for(i=0;i<n;i++){
		
	printf("A value of a[%d] is %d\n",i,*(ptra+i));	
}
}
