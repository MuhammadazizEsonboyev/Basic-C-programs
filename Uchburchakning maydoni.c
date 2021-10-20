#include <stdio.h>

int main()
{
    float base, height, area;


    printf("Uchburchakning asosini kiriting: ");
    scanf("%f", &base);
    printf("Uchburchakning balandligini kiriting: ");
    scanf("%f", &height);


    area = (base * height) / 2;


    printf("Uchburchakning maydoni = %.2f sq. birliklar", area);

    return 0;
}



