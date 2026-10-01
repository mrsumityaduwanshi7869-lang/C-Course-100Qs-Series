#include <stdio.h>

int main(){
    int i=2;
    do{
       if(i==2 || i==3 || i==5 || i==7 || i==11 || i==13 || i==17 || i==19){
           printf("%d\n",i);
       }
        i++;
    }while(i<=20);
    
    return 0;
}