#include<stldio.h>

void main(){
     int a,b,n;
     printf("enterb a:",a);
     scanf("%d",&a);
     printf("enter b:",b);
     scanf("%d",&b);
     scanf("%d",&n);
     switch(n){
     case 1:printf("a+b=%d",a+b);
     break;
     case 2:printf("a-b=%d",a-b);
     break;
     case 3:printf("a*b=%d",a*b);
     break;
     case 4:printf("a/b=%d",a/b);
     break;
     default:printf("aenter correct number");
     break;
     }


}
