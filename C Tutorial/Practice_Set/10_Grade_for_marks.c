#include <stdio.h>

int main(){

    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100){
        printf("Grade A+\n");
    }
    else if(marks >= 70 && marks <90){
        printf("Grade A\n");
    }
    else if(marks >= 30 && marks <70){
        printf("Grade B\n");
    }
    else if(marks < 30){
        printf("Grade C\n");
    }
    else{
        printf("Invalid Marks\n");
    }
    return 0;
}