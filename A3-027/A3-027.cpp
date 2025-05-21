#include <cstdio>

char grid[105][105], nextGrid[105][105];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            scanf(" %c", &grid[i][j]);

    // Simulate one step of water flowing down
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            nextGrid[i][j] = grid[i][j];

    for (int i = 1; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (grid[i-1][j] == '*')
                nextGrid[i][j] = '*';

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            putchar(nextGrid[i][j]);
            if (j < m-1) putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
