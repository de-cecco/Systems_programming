#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    // Prompt the user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }


    int root = (int)sqrt(n);


    int lowerSquare = root * root;
    int upperSquare = (root + 1) * (root + 1);


    if ((n - lowerSquare) <= (upperSquare - n)) {
        printf("The closest integer with a whole number square root is: %d\n", lowerSquare);
    } else {
        printf("The closest integer with a whole number square root is: %d\n", upperSquare);
    }

    return 0;
}
