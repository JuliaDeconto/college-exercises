#include <stdio.h>

int main() {

    int matrix[3][3];
    int i, j;
    int sum = 0;

    for (i = 0; i < 3; i++) {
        
        for (j = 0; j < 3; j++) {
            printf("Enter number: ");
            scanf("%d", &matrix[i][j]);

            sum += matrix[i][j];
        }
    }

    printf("%d", sum);
    return 0;
}