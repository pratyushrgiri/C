/*Write a program to inter the radius of the circle and find the area of the circle using user defined function*/
#include <stdio.h>
// making a function with one parimter 
float area(float r){
    //defining variables
    float area;
    area=3.14*r*r;  
    retrun(area);
}

void main(){
    float radius;
    printf("Program For the area of circle.");
    // Taking the value of radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
}