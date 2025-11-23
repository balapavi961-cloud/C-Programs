#include <stdio.h>

int main() {
    int n;
    int first = 0, second = 1, next;

    // Input number of terms
    printf("Enter the number of terms (minimum 2): ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
