#include<stdio.h>

void main(){
    int i=1,a,b;
    scanf("%d",&a);
    while(i<11){
        b=a*i;
       printf("%d*%d=%d\n",a,i,b);
       i++;
    }
}