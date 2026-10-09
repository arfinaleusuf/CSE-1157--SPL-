#include <stdio.h>
int main()
{
    int w;
    scanf("%d", &w);
    if (w == 1)
    {
        printf("NO");
        return 0;
    }
    int result = w / 2;
    if (result % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}