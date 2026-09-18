#include <stdio.h>

int graph[10][10], visited[10], n;

void dfs(int node)
{
    visited[node] = 1;

    for(int i = 0; i < n; i++)
    {
        if(graph[node][i] == 1 && !visited[i])
        {
            printf("%d -> %d\n", node, i);
            dfs(i);
        }
    }
}

int main()
{
    int source;

    printf("Enter number of hosts: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter source host: ");
    scanf("%d", &source);

    printf("\nBroadcast Tree:\n");
    dfs(source);

    return 0;
}