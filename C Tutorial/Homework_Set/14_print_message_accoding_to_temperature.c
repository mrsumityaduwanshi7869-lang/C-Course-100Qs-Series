#include <stdio.h>

int main(){
    int temp;
    printf("Enter the temperature : ");
    scanf("%d", &temp);
    if(temp >0 && temp <= 30){
        printf("Cold");
    }
    else if(temp > 30 && temp <= 50){
        printf("HOT");
    }
    else{
        printf("Invalid temperature");
    }
    return 0;
}