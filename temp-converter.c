#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num = 0;

    while (true)
    {
        if (num == 1)
        {
            float c;

            printf("Enter Celsius temperature: ");
            scanf("%f", &c);

            float f = (c * 9 / 5) + 32;

            printf("Fahrenheit temperature is %.2f\n", f);
            return 0;
        }
        else if (num == 2)
        {
            float c;

            printf("Enter Celsius temperature: ");
            scanf("%f", &c);

            float k = c + 273;

            printf("Kelvin temperature is %.2f\n", k);
            return 0;
        }
        else if (num == 3)
        {
            float f;

            printf("Enter Fahrenheit temperature: ");
            scanf("%f", &f);

            float c = (f - 32) * 5 / 9;

            printf("Celsius temperature is %.2f\n", c);
            return 0;
        }
        else if (num == 4)
        {
            float f;

            printf("Enter Fahrenheit temperature: ");
            scanf("%f", &f);

            float k = (f - 32) * 5 / 9 + 273;

            printf("Kelvin temperature is %.2f\n", k);
            return 0;
        }
        else if (num == 5)
        {
            float k;

            printf("Enter Kelvin temperature: ");
            scanf("%f", &k);

            float c = k - 273;

            printf("Celsius temperature is %.2f\n", c);
            return 0;
        }
        else if (num == 6)
        {
            float k;

            printf("Enter Kelvin temperature: ");
            scanf("%f", &k);

            float f = (k - 273) * 9 / 5 + 32;

            printf("Fahrenheit temperature is %.2f\n", f);
            return 0;
        }
        else if (num == 7)
        {
            printf("Exiting...\n");
            return 0;
        }
        else
        {
            printf("1. Celsius to Fahrenheit\n");
            printf("2. Celsius to Kelvin\n");
            printf("3. Fahrenheit to Celsius\n");
            printf("4. Fahrenheit to Kelvin\n");
            printf("5. Kelvin to Celsius\n");
            printf("6. Kelvin to Fahrenheit\n");
            printf("7. Exit\n");

            printf("Choice from 1 to 7: ");
            scanf("%d", &num);

            if (num < 1 || num > 7)
            {
                printf("Enter a valid number from the list\nRetry...");
            }
        }
    }

    return 0;
}