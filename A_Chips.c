#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int round_sum = n * (n + 1) / 2;

    m %= round_sum;
    
    for (int i = 1; i <= n; i++) {
        if (m >= i) {
            m -= i;
        } else {
            break;
        }
    }

    printf("%d\n", m);

    return 0;
}