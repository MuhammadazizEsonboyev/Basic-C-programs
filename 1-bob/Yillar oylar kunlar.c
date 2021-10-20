#include <stdio.h>

int main()
{
    int days, years, weeks;

 
    printf("Kunlarni kirgizing: ");
    scanf("%d", &days);

    years = (days / 365);  
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));

    printf("Yil: %d\n", years);
    printf("Oy: %d\n", weeks);
    printf("Kun: %d", days);

    return 0;
}
