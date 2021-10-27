
#include <stdio.h>

int main()
{
    int year;


    printf("Yil kiriting : ");
    scanf("%d", &year);

    if((year % 4 == 0) || (year % 400 == 0)){
        printf("LEAP Yil");
    }
    else
    {
        printf("COMMON Yil");
    }

    return 0;
}
