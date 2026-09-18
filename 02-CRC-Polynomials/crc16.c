#include <stdio.h>
#include <string.h>

int main() {
    char data[100], divisor[] = "11000000000000101", temp[100];
    int dataLen = 0, divLen = strlen(divisor);

    printf("Enter Data Bits: ");
    scanf("%s", data);

    dataLen = strlen(data);
    strcpy(temp, data);

    for(int i = 0; i < divLen - 1; i++)
        temp[dataLen + i] = '0';

    temp[dataLen + divLen - 1] = '\0';

    for(int i = 0; i < dataLen; i++) {
        if(temp[i] == '1') {
            for(int j = 0; j < divLen; j++)
                temp[i+j] = (temp[i+j] == divisor[j]) ? '0' : '1';
        }
    }

    printf("CRC-16 Code: ");
    for(int i = dataLen; i < dataLen + divLen - 1; i++)
        printf("%c", temp[i]);

    printf("\n");

    return 0;
}