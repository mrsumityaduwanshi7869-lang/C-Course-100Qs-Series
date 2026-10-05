#include <stdio.h>

int main(){
    int n;
    do{   
    printf("Enter Number : ");
    scanf("%d", &n);
    printf("You entered :%d\n", n);
    if(n%2 != 0){
        break;
    }
    }while(1);
    printf("You entered an odd number : %d", n);
    return 0;
}