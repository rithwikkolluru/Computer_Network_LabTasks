#include <stdio.h>

#define INF 999

struct node {
    int dist[20];
    int from[20];
} route[20];

int main() {
    int costmat[20][20];
    int nodes, i, j, k, count = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &nodes);

    printf("Enter cost matrix:\n");
    for(i = 0; i < nodes; i++) {
        for(j = 0; j < nodes; j++) {
            scanf("%d", &costmat[i][j]);
            if(i != j && costmat[i][j] == 0)
                costmat[i][j] = INF;
            route[i].dist[j] = costmat[i][j];
            route[i].from[j] = j;
        }
    }

    do {
        count = 0;
        for(i = 0; i < nodes; i++) {
            for(j = 0; j < nodes; j++) {
                for(k = 0; k < nodes; k++) {
                    if(route[i].dist[j] > costmat[i][k] + route[k].dist[j]) {
                        route[i].dist[j] = route[i].dist[k] + route[k].dist[j];
                        route[i].from[j] = k;
                        count++;
                    }
                }
            }
        }
    } while(count != 0);

    for(i = 0; i < nodes; i++) {
        printf("\nRouting table for router %d:\n", i + 1);
        printf("Destination\tNext Hop\tDistance\n");
        for(j = 0; j < nodes; j++) {
            printf("%d\t\t%d\t\t%d\n", j + 1, route[i].from[j] + 1, route[i].dist[j]);
        }
    }

    return 0;
}
