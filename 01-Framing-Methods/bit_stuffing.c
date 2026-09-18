#include <stdio.h>

int main() {
    char bits[100];
    int count = 0;

    printf("Enter Bit Stream: ");
    scanf("%s", bits);

    printf("Stuffed Bits: ");

    for(int i = 0; bits[i] != '\0'; i++) {
        printf("%c", bits[i]);

        if(bits[i] == '1') {
            count++;
            if(count == 5) {
                printf("0");
                count = 0;
            }
        } else {
            count = 0;
        }
    }

    return 0;
}