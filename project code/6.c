/*write a program to input the a number and check wether it is positive or negative by using user defined function*/
#include <stdio.h>
// making a function
int Po_Ne(int n){
    (n>0)?printf("Positive integer"):printf("Negative integer");
}

void main(){
    int n;
    // Taking user input
    printf("Enter an integer : ");
    scanf("%d",&n);
    printf("\n");
    //using the function
    Po_Ne(n);
}