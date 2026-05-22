#include <stdio.h>

int main() {

    int numeros[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Enter a number: ");
        scanf("%d", &numeros[i]);
    }

    for (i = 5; i >= 0; i--) 
        printf("%d, ", numeros[i]);

}