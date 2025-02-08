/*Write a program to enter length and bredth of a swming pool and find its area using user defined function*/
#include <stdio.h>
// making a function for area of swming pool
float area(float l,float b){
    return l*b;
}

void main()
{
    //defining variables
    float l,b,a;
    //taking the user inputs
    printf("Enter the length: ");
    scanf("%f",&l);
    printf("\n");
    printf ("Enter the bredth: ");
    scanf("%f",&b);
    //using the function
    a= area(l,b);
    //displaying the output
    printf("The area of the object is %.2f sq-units.",a);
    
}
