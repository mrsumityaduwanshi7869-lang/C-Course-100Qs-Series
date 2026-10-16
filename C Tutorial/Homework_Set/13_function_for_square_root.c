#include <stdio.h>
#include <math.h>

int squareroot(int n){
    if(n < 0){
        return -1;
    }
    return sqrt(n);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Square root of %d is : %d", n, squareroot(n));
}