#include <stdio.h>

int main(){
    int isSunday = 1; // 1 means true, 0 means false
    int isSnowing = 0; // 1 means true, 0 means false
    printf("%d\n", isSunday && isSnowing); // logical AND operator
    printf("%d\n", isSunday || isSnowing); // logical OR operator
    return 0;
}