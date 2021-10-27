#include <stdio.h>

int main()
{
    char ch;

   
    printf("Harflar kiriting: ");
    scanf("%c", &ch);


    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("%c Unli.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c Undosh.", ch);
    }
    else {
        printf("%c Alifboda yoq.", ch);
    }

    return 0;
}
