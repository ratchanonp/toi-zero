#include <cstdio>

int main() {
    int N, M;
    int ret; (void)(ret = scanf("%d %d\n", &N, &M));
    char img1[1000][1001], img2[1000][1001];

    // Read image 1 (top)
    for (int i = 0; i < N; ++i) (void)(ret = scanf("%s", img1[i]));
    // Read image 2 (bottom)
    for (int i = 0; i < N; ++i) (void)(ret = scanf("%s", img2[i]));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            char a = img1[i][j], b = img2[i][j];
            // Inline overlay logic
            if (a == '-' && b == '-') putchar_unlocked('-');
            else if (a == '-' && b == '+') putchar_unlocked('+');
            else if (a == '-' && b == 'x') putchar_unlocked('x');
            else if (a == '+' && b == '-') putchar_unlocked('+');
            else if (a == '+' && b == 'x') putchar_unlocked('*');
        }
        putchar_unlocked('\n');
    }
    return 0;
}
