
#include <stdio.h>

void TwoNonRepeating(int arr[], int n) {
    int xor = 0, rsb, num1 = 0, num2 = 0;

    
    for (int i = 0; i < n; i++) {
        xor ^= arr[i];
    }
    
    rsb = xor & -xor;

    for (int i = 0; i < n; i++) {
        if (arr[i] & rsb) {
            num1 ^= arr[i]; 
        } else {
            num2 ^= arr[i]; 
        }
    }


    printf("The two non-repeating elements are: %d and %d\n", num1, num2);
}

int main() {
    int arr[] = {4, 5, 4, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    TwoNonRepeating(arr, n);

    return 0;
}
