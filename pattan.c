#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char letter = 'A';
    for(int i=0; i<n; i++)
    {
        for(int k = 0; k<=i; k++)
        {
            printf("%c",letter);
        }
        letter++;
        printf("\n");
    }
    return 0;
}