#include <stdio.h>

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    int isPrime = 1;  // aassume number is prime
    if(n <= 1){
        isPrime = 0;
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime == 1){
        printf("%d is a Prime number", n);
    }
    else{
        printf("%d is not a Prime number", n);
    }
    return 0;
}