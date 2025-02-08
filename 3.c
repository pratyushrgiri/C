/*Write a program to inter the radius of the circle and find the area of the circle using user defined function*/
#include <stdio.h>
// making a function with one parimter 
float area(float r){
    return 3.14*r*r;
}

void main(){
    float radius,Area;
    printf("Program For the area of circle.\n");
    // Taking the value of radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    // using the function 
    Area= area(radius);
    // printing the values
    printf("\nThe area of the circle is %.2f sq-units.",Area);

}