#include <stdio.h>
#include <math.h>

int main()
{
    double num, root;

    printf("Kvadrat ildizni topish uchun istalgan raqamni kiriting: ");
    scanf("%lf", &num);

    root = sqrt(num);


    printf("Kvadrat ildiz %.2lf = %.2lf", num, root);

    return 0;
}

