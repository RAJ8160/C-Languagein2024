#include<studio.h>

void main(){
   int i,a;
   scanf("%d",&a);
   while(i<=a){
    if(a%i==0){
    printf("%d",i);
    }
    i++;
   }
}