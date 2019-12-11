#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void caesar(char* plainText, int key) {
    int i = 0;
    int cipherValue;
    char cipher;

    while (plainText[i] != '\0' && strlen(plainText) - 1 > i) {
        cipherValue = ((int)plainText[i] - 97 + key) % 26 + 97;
        cipher = (char)(cipherValue);

        printf("%c", cipher);
        i++;
    }
}


int main(void) {
    int offset = 1;
    char input[256];

    printf("\nCaesar Cipher utility!\n");

    printf("\nPlease enter plain text to cipher: ");
    //scanf("%c", &input);
    fgets(input, sizeof(input), stdin);

    printf("\nEnter an offset for the cipher: ");
    scanf("%i", &offset);

    printf("\nThe ciphered text is: ");
    caesar(input, offset);
    printf("\n\n");

    return 0;
}
