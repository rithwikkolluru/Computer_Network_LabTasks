#include <stdio.h>

int main() {
    char data[100];

    printf("Enter Data: ");
    scanf("%s", data);

    printf("Stuffed Frame: F");

    for(int i = 0; data[i] != '\0'; i++) {
        if(data[i] == 'F' || data[i] == 'E')
            printf("E");

        printf("%c", data[i]);
    }

    printf("F\n");

    return 0;
}