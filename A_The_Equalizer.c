#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int arr[n];
        long long sum = 0;

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int j = 0; j < n; j++)
        {
            sum += arr[j];
        }

        if (sum % 2 != 0 || (1LL * n * k) % 2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}