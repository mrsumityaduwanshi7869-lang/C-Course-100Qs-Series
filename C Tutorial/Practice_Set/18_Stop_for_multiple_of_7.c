#include <stdio.h>

int main(){
    int n;
    do{   
    printf("Enter Number : ");
    scanf("%d", &n);
    printf("You entered :%d\n", n);
    if(n%7 == 0){
        break;
    }
    }while(1);
    printf("You entered a multiple of 7 : %d", n);
    return 0;
}