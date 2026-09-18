#include <stdio.h>

int main() {
    int totalFrames, windowSize, i = 1;

    printf("Enter Total Frames: ");
    scanf("%d", &totalFrames);

    printf("Enter Window Size: ");
    scanf("%d", &windowSize);

    while (i <= totalFrames) {
        printf("\nSending Frames: ");

        for (int j = 0; j < windowSize && i <= totalFrames; j++) {
            printf("%d ", i);
            i++;
        }

        printf("\nAcknowledgement Received\n");
    }

    return 0;
}