#include <stdio.h>

int main()
{
    float cm, meter, km;

    printf("Santimetr uzunligini kiriting: ");
    scanf("%f", &cm);

    
    meter = cm / 100.0;
    km = cm / 100000.0;

    printf("Metrdagi uzunlik = %.2f m \n", meter);
    printf("Kilametr  uzunligi = %.2f km", km);

    return 0;
}

