#include <stdio.h>

// Function to transfer discs from the source tower to the destination tower
void transfer(int n, char src[], char aux[], char dest[]) {
    if (n > 0) {
        // Move n-1 disks from src to aux using dest as auxiliary
        transfer(n - 1, src, dest, aux);

        // Move the nth disk from src to dest
        printf("Move disk no. %d from %s to %s\n", n, src, dest);

        // Move n-1 disks from aux to dest using src as auxiliary
        transfer(n - 1, aux, src, dest);
    }
}

int main() {
    int n;
    printf("Enter the number of discs: ");
    scanf("%d", &n);

    printf("\nTo solve the Tower of Hanoi, follow these steps:\n");
    printf("Discs are numbered from 1 to %d in increasing order of size (from top to bottom):\n\n", n);

    // Call the function with appropriate tower names
    transfer(n, "Source_tower", "Spare_tower", "Destination_tower");

    return 0;
}
