/* 28. 1 2 3 6 9 18 27 54...*/

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int term = 1; // The first term in the series

    for (int i = 0; i < n; i++) {
        printf("%d ", term);
        term *= 3; // Multiply the current term by the common ratio (3)
    }

    printf("\n");

    return 0;
}
//baki he...
