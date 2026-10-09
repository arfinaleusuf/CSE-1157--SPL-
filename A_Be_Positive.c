
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        int count_neg = 0;
        int count_zero = 0;

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == -1)
                count_neg++;
            else if (arr[j] == 0)
                count_zero++;
        }

        int ans = count_zero;

        if (count_neg % 2 != 0)
        {
            ans += 2;
        }

        printf("%d\n", ans);
    }

    return 0;
}
