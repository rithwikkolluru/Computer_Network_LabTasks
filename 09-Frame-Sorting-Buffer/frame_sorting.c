#include <stdio.h>
#include <string.h>

struct frame {
    int seq_no;
    char data[50];
};

int main() {
    int n, i, j;
    struct frame frames[50], temp;

    printf("Enter number of frames: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter frame %d sequence number: ", i + 1);
        scanf("%d", &frames[i].seq_no);
        printf("Enter frame %d data: ", i + 1);
        scanf("%s", frames[i].data);
    }

    // Sort frames based on sequence number
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(frames[j].seq_no > frames[j + 1].seq_no) {
                temp = frames[j];
                frames[j] = frames[j + 1];
                frames[j + 1] = temp;
            }
        }
    }

    printf("\n--- Sorted Frames in Buffer ---\n");
    printf("Seq No\tData\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\n", frames[i].seq_no, frames[i].data);
    }

    return 0;
}
