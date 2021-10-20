#include <stdio.h>

int main()
{
    float length;
    float width;
    float area;
    printf("Tortburchak uzunligini kiriting: ");
    scanf("%f", &length);
    printf("Tortburchkning kengligini kiriting: ");
    scanf("%f", &width);


    area = length * width;


    printf("To'rtburchak maydoni = %f kv. Birlik", area);

    return 0;
}

