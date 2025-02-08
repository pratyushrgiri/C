#include <stdio.h>

void fibonacci(int n, int t1, int t2) {
    if (n > 0) {
        int next = t1 + t2;
        printf("%d ", next);
        fibonacci(n - 1, t2, next);
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: 0 1 ");
    fibonacci(n - 2, 0, 1);
    return 0;
}
