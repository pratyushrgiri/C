/*Write a program to read principle time rate and also find the area by using user defined function*/
#include <stdio.h>
//making a function
float simpleIntrest(float p,float t,float r){
    return (p*t*r)/100;
}
void main(){
    float p,t,r;
    // taking user inputs
    printf("Enter the principle: ");
    scanf("%f",&p);
    printf("\nEnter the time: ");
    scanf("%f",&t);
    printf("/n Enter the rate: ");
    scanf("%f",&r);
    //using the function
    printf("The simple intrest is %.4f",simpleIntrest(p,t,r));
}

