#include <stdio.h>

int main()
{
    float radius, diameter, circumference, area;
    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);


    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);

    printf("Doira diametri = %.2f units \n", diameter);
    printf("Doira doirasi = %.2f units \n", circumference);
    printf("Doira maydoni = %.2f sq. units ", area);

    return 0;
}



