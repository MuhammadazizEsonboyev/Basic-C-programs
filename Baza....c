#include <stdio.h>
//#include <math.h> 

int main()
{
    double base, expo, power;


    printf("Baza kiriting: ");
    scanf("%lf", &base);
    printf("Eksponentni kiriting: ");
    scanf("%lf", &expo);


    power = pow(base, expo);

    printf("%.2lf ^ %.2lf = %.2lf", base, expo, power);

    return 0;
}


