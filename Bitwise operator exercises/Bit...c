
#include <stdio.h>

int main()
{
    int num, n, bitStatus;
   
    printf("Har qanday raqamni kiriting: ");
    scanf("%d", &num);

    printf("Tekshirish uchun n -bitni kiriting (0-31): ");
    scanf("%d", &n);

    bitStatus = (num >> n) & 1;

    printf("%d bit o'rnatilgan %d", n, bitStatus);

    return 0;
}
