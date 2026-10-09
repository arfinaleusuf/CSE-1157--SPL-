#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int d[105];
    for (int i = 1; i <= n - 1; i++) {
        scanf("%d", &d[i]);
    }

    int a, b;
    scanf("%d %d", &a, &b);

    int total_years = 0;
    for (int i = a; i < b; i++) {
        total_years += d[i];
    }

    printf("%d\n", total_years);

    return 0;
}