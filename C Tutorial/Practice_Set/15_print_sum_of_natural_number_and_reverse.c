#include <stdio.h>

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int sum =0;

    for(int i=n; i>=1; i--){
        printf("%d\n", i);
        sum += i;
    }
    printf("Sum of natural number from 1 to %d is : %d", n, sum);
    return 0;
}