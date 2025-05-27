#include <stdio.h>
#include <math.h>

int main() {
    int p, q;
    int count = 0;

    printf("Enter two numbers (p and q): ");
    scanf("%d %d", &p, &q);

    for (int i = p; i <= q; i++) {
        long long square = (long long)i * i;

        int digits = 0, temp = i;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        long long divider = (long long)pow(10, digits);
        int left = square / divider;
        int right = square % divider;

        if (left + right == i && right != 0) {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0) {
        printf("No Kaprekar numbers found.\n");
    } else {
        printf("\nTotal Kaprekar numbers: %d\n", count);
    }

    return 0;
}
