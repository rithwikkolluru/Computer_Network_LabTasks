#include <stdio.h>
#include <string.h>

int main() {
    char message[100], encrypted[100], decrypted[100];
    int key, i;

    printf("Enter a message to encrypt: ");
    scanf(" %[^\n]", message);

    printf("Enter key (shift value): ");
    scanf("%d", &key);

    // Encryption
    for(i = 0; message[i] != '\0'; i++) {
        char ch = message[i];
        if(ch >= 'a' && ch <= 'z') {
            encrypted[i] = (ch - 'a' + key) % 26 + 'a';
        } else if(ch >= 'A' && ch <= 'Z') {
            encrypted[i] = (ch - 'A' + key) % 26 + 'A';
        } else {
            encrypted[i] = ch;
        }
    }
    encrypted[i] = '\0';

    printf("\nEncrypted Message: %s\n", encrypted);

    // Decryption
    for(i = 0; encrypted[i] != '\0'; i++) {
        char ch = encrypted[i];
        if(ch >= 'a' && ch <= 'z') {
            decrypted[i] = (ch - 'a' - key + 26) % 26 + 'a';
        } else if(ch >= 'A' && ch <= 'Z') {
            decrypted[i] = (ch - 'A' - key + 26) % 26 + 'A';
        } else {
            decrypted[i] = ch;
        }
    }
    decrypted[i] = '\0';

    printf("Decrypted Message: %s\n", decrypted);

    return 0;
}
