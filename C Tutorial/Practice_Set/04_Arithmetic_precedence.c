#include <stdio.h>
int main(){
    int a = 5 + 3 * 2/2; // multiplication has higher precedence than addition
    printf("The value of a is: %d\n", a);  // output the value of a
    return 0;
}