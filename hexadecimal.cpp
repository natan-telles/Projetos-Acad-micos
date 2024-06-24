#include <stdio.h>

int main() {
    int decimal;
    printf("Digite um n�mero decimal: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("O valor hexadecimal �: 0\n");
        return 0;
    }

    printf("O valor hexadecimal de %d �: ", decimal);

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            printf("%c", remainder + '0');
        } else {
            printf("%c", remainder - 10 + 'A');
        }
        decimal /= 16;
    }

    printf("\n");

    return 0;
}

