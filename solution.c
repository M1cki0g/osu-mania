#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);  // Read number of test cases

    while (t--) {
        scanf("%d", &n);  // Read number of rows for the test case
        char row[5];
        int columns[n];  // Array to store the column positions

        for (int i = 0; i < n; i++) {
            scanf("%s", row);  // Read each row (4 characters)

            // Find the position of the '#' character
            for (int j = 0; j < 4; j++) {
                if (row[j] == '#') {
                    columns[n - 1 - i] = j + 1;  // Store the column index in reverse order
                    break;
                }
            }
        }

        // Output the results
        for (int i = 0; i < n; i++) {
            printf("%d ", columns[i]);
        }
        printf("\n");
    }

    return 0;
}
