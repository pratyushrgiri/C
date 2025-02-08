// 1. Program to display "Hello World" using function
#include <stdio.h>

void hello() {
    printf("Hello World\n");
}

int main() {
    hello();
    return 0;
}

// 2. Program to find the sum of two input numbers using user-defined function
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Sum: %d\n", sum(x, y));
    return 0;
}

// 3. Program to find the area of a circle using user-defined function
#include <stdio.h>
#define PI 3.1416

double areaCircle(double r) {
    return PI * r * r;
}

int main() {
    double r;
    printf("Enter radius: ");
    scanf("%lf", &r);
    printf("Area: %.2lf\n", areaCircle(r));
    return 0;
}

// 4. Program to find the area of a rectangle using function
#include <stdio.h>

double areaRectangle(double l, double b) {
    return l * b;
}

int main() {
    double l, b;
    printf("Enter length and breadth: ");
    scanf("%lf %lf", &l, &b);
    printf("Area: %.2lf\n", areaRectangle(l, b));
    return 0;
}

// 5. Program to calculate Simple Interest
#include <stdio.h>

double simpleInterest(double p, double t, double r) {
    return (p * t * r) / 100;
}

int main() {
    double p, t, r;
    printf("Enter principal, time, rate: ");
    scanf("%lf %lf %lf", &p, &t, &r);
    printf("Simple Interest: %.2lf\n", simpleInterest(p, t, r));
    return 0;
}

// 6-9 already implemented

// 10. Program to display a pattern
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

// 11. Program to find factorial using recursion
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial: %d\n", factorial(num));
    return 0;
}

// 12. Sum of first N natural numbers using recursion
#include <stdio.h>

int sumN(int n) {
    if (n == 0) return 0;
    return n + sumN(n - 1);
}

int main() {
    int num;
    printf("Enter N: ");
    scanf("%d", &num);
    printf("Sum: %d\n", sumN(num));
    return 0;
}

// 13. Fibonacci series using recursion
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}


