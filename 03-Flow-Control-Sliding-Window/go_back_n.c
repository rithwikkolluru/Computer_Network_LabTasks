#include <stdio.h>

int main() {
    int totalFrames, windowSize, lostFrame;

    printf("Enter Total Frames: ");
    scanf("%d", &totalFrames);

    printf("Enter Window Size: ");
    scanf("%d", &windowSize);

    printf("Enter Lost Frame Number: ");
    scanf("%d", &lostFrame);

    printf("\nTransmission:\n");

    for (int i = 1; i <= totalFrames; i++) {

        if (i == lostFrame) {
            printf("Frame %d Lost\n", i);

            printf("\nRetransmitting Frames:\n");

            for (int j = lostFrame; j <= totalFrames; j++) {
                printf("Frame %d Sent\n", j);
            }

            break;
        }
        else {
            printf("Frame %d Sent\n", i);
        }
    }

    return 0;
}