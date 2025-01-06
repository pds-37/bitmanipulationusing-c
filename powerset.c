#include <stdio.h>
#include <math.h>

// Function to print the power set
void generatePowerSet(char set[], int n) {
    int powerSetSize = pow(2, n); 

    printf("Power Set:\n");
    for (int counter = 0; counter < powerSetSize; counter++) {
        printf("{ ");
        for (int j = 0; j < n; j++) {
            
            if (counter & (1 << j)) {
                printf("%c ", set[j]);
            }
        }
        printf("}\n");
    }
}

int main() {
    char set[] = {'a', 'b', 'c'};
    int n = sizeof(set) / sizeof(set[0]);

    PowerSet(set, n);

    return 0;
}
