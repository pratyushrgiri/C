/*Write a program to find the sum of two input numbers using user defined 
function.*/
#include <stdio.h>

// Making a function a function with two parimeters of integer variable
int sum(int a,int b){
    int sum;
    sum=a+b;
    return(sum); //Returning the value
}

void main(){
    // defining three variables
    int a,b,Sum;
    printf("The sum Program.\n");   // title 
    // taking the users input
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("\n");
    printf("Enter the second number:");
    scanf("%d",&b);
    // using the function
    Sum=sum(a,b);
    printf("The sum is %d",Sum);    //printing the returned values
}