#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Selsiy bo'yicha haroratni kiriting: ");
    scanf("%f", &celsius);


    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Selsiy = %.2f Farengeyt", celsius, fahrenheit);

    return 0;
}

