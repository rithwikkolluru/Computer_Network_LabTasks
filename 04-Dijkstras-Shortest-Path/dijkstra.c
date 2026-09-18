#include <stdio.h>

#define INF 999

int main() {
    int n, cost[10][10], dist[10], visited[10];
    int source, i, j, u, min;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);

            if(cost[i][j] == 0 && i != j)
                cost[i][j] = INF;
        }
    }

    printf("Enter source vertex (0 to %d): ", n - 1);
    scanf("%d", &source);

    // Initialize
    for(i = 0; i < n; i++) {
        dist[i] = cost[source][i];
        visited[i] = 0;
    }

    dist[source] = 0;
    visited[source] = 1;

    // Dijkstra Algorithm
    for(i = 1; i < n; i++) {
        min = INF;
        for(j = 0; j < n; j++) {
            if(!visited[j] && dist[j] < min) {
                min = dist[j];
                u = j;
            }
        }

        visited[u] = 1;
        for(j = 0; j < n; j++) {
            if(!visited[j] && dist[u] + cost[u][j] < dist[j]) {
                dist[j] = dist[u] + cost[u][j];
            }
        }
    }

    printf("\nShortest Distances:\n");

    for(i = 0; i < n; i++) {
        printf("%d -> %d = %d\n", source, i, dist[i]);
    }

    return 0;
}