#include <stdio.h>

int sum (int a[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    return sum;
}
int main(){
    int a[5];
    for(int i=0; i<5; i++){
        printf("Enter number %d : ", i+1);
        scanf("%d", &a[i]);
    }
    
    printf("Sum of 5 numbers is : %d", sum(a, 5));
    return 0;

}