#include <stdio.h>

//Area of Circle
int main(){
    float radius;
    printf("Enter Radius of Circle : ");
    scanf("%f",&radius);
    printf("Area of Circle : %f", 3.14 * radius*radius); // formula = pi*r*r
    return 0;
}