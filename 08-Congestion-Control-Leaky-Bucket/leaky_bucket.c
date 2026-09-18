#include <stdio.h>

int main() {
    int incoming, outgoing, bucket_size, n, store = 0;

    printf("Enter bucket size: ");
    scanf("%d", &bucket_size);

    printf("Enter output rate: ");
    scanf("%d", &outgoing);

    printf("Enter number of inputs: ");
    scanf("%d", &n);

    while (n != 0) {
        printf("\nEnter incoming packet size: ");
        scanf("%d", &incoming);

        printf("Incoming packet size: %d\n", incoming);

        if (incoming <= (bucket_size - store)) {
            store += incoming;
            printf("Bucket buffer size: %d out of %d\n", store, bucket_size);
        } else {
            printf("Dropped %d packets. Bucket buffer full!\n", incoming - (bucket_size - store));
            store = bucket_size;
            printf("Bucket buffer size: %d out of %d\n", store, bucket_size);
        }

        if (store >= outgoing) {
            store -= outgoing;
        } else {
            store = 0;
        }

        printf("After outgoing, %d packets left in buffer\n", store);
        n--;
    }

    return 0;
}
