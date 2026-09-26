#include <stdio.h>
#include <math.h>

int main(){
    int num, originalnum, remainder, n =0;
    float result = 0.0;
    printf("Enter an interger : ");
    scanf("%d", &num);

    originalnum = num;
    while(originalnum != 0){
         originalnum = originalnum / 10;
         n++;
    }

    originalnum = num;
    while(originalnum != 0){
        remainder = originalnum % 10;
        result += pow(remainder, n);
        originalnum /= 10;
    }

    if(result == num){
        printf("%d is an Armstrong number\n", num);
    }
    else{
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}