#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int cube = number * number * number;
    printf("The cube of %d is: %d\n", number, cube);
    return 0;
}