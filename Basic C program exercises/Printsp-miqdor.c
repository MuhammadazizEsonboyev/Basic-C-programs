#include <stdio.h>

int main()
{
    float principle, time, rate, SI;


    printf("Printsipni kiriting (miqdor): ");
    scanf("%f", &principle);

    printf("Vaxtni kiriting: ");
    scanf("%f", &time);

    printf("Bahoni kiriting: ");
    scanf("%f", &rate);

    SI = (principle * time * rate) / 100;

    printf("Oddiy qiziqish = %f", SI);

    return 0;
}

