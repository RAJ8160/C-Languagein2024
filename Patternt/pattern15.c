#include<stdio.h>

void main(){
    int i,j,I;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
           printf(" ");
        }
        if(i==3||i==5||i==1){
            for(j=1;j<=i;j++){
                printf(" %d",j);
            }
            printf("\n");
        }
      else{
           I=65+i;
            if(I<=67){
            for(j='A';j<I;j++){
                printf(" %c",j);
            }
            }
            else{
                for(j='C';j<=I+1;j++){
                printf(" %c",j);
            }
            }
            printf("\n");
        }
    }
}
