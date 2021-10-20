
#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, CI;


    printf("Tamoyil kiriting (miqdori): ");
    scanf("%f", &principle);

    printf("Vaxtni kiriting: ");
    scanf("%f", &time);

    printf("Bahoni kiriting: ");
    scanf("%f", &rate);


    CI = principle* (pow((1 + rate / 100), time));


    printf("Murakkab foizlar = %f", CI);

    return 0;
}

