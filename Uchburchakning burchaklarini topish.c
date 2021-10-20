#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Uchburchakning birinchi burchagini kiriting: ");
    scanf("%d", &a);
    printf("Uchburchakning ikkinchi burchagini kiriting: ");
    scanf("%d", &b);


    c = 180 - (a + b);

   
    printf("Uchburchakning uchinchi burchagi = %d", c);

    return 0;
}


