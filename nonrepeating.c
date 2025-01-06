
#include <stdio.h>

void findTwoNonRepeating(int arr[], int n) {
    int xor = 0, rightmost_set_bit, num1 = 0, num2 = 0;

    // Step 1: XOR all elements to get xor of the two unique numbers
    for (int i = 0; i < n; i++) {
        xor ^= arr[i];
    }

    // Step 2: Find the rightmost set bit in xor
    rightmost_set_bit = xor & -xor;

    // Step 3: Divide elements into two groups and XOR them separately
    for (int i = 0; i < n; i++) {
        if (arr[i] & rightmost_set_bit) {
            num1 ^= arr[i]; // Group with the bit set
        } else {
            num2 ^= arr[i]; // Group with the bit not set
        }
    }

    // Print the two unique numbers
    printf("The two non-repeating elements are: %d and %d\n", num1, num2);
}

int main() {
    int arr[] = {4, 5, 4, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    findTwoNonRepeating(arr, n);

    return 0;
}
