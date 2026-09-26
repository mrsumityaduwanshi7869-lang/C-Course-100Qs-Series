#include <stdio.h>

int main(){
    int num;
    printf("Enter Number  : ");
    scanf("%d", &num);

    if(num >0 ){
        printf("%d is a Natural number", num);
    }

    else{
        printf("%d is not a Natural number", num);
    }
    return 0;
}