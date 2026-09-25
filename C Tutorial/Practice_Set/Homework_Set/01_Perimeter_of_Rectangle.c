#include <stdio.h>

int main(){
    int length;
    int width ;
    printf("Enter The lenght of rectangle :");
    scanf("%d", &length);
    printf("Enter the width of rectangle :");
    scanf("%d", &width);
    int perimeter = 2 * (length + width);
    printf("The perimeter of the rectangle is: %d\n", perimeter);
    return 0;
}