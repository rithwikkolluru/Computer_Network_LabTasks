#include <stdio.h>
#include <string.h>

int main() {
    char data[100];

    printf("Enter Data: ");
    scanf("%s", data);

    printf("Framed Data: %d%s\n", (int)strlen(data), data);

    return 0;
}