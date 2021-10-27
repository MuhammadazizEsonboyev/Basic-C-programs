
#include <stdio.h>

int main()
{
    int cp,sp, amt; 
    
 
    printf("Harajat narxi: ");
    scanf("%d", &cp);
    printf("Sotish narxi: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
        amt = sp - cp;
        printf("Foida = %d", amt);
    }
    else if(cp > sp)
    {
        amt = cp - sp;
        printf("Yoqotish = %d", amt);
    }
    else
    {
        printf("Foydaham zararham yoq.");
    }

    return 0;
}
