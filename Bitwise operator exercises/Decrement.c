#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 /* Size of int in bits */

int main()
{
    int num, index, i;
    int bin[INT_SIZE];
  
    printf("Enter any number: ");
    scanf("%d", &num);
    index = INT_SIZE - 1;
    while(index >= 0)
    {
  
        bin[index] = num & 1;
   
        index--;
  
        num >>= 1;
    }
    /* Print converted binary */
    printf("Converted binary: ");
    for(i=0; i<INT_SIZE; i++)
    {
        printf("%d", bin[i]);
    }

    return 0;
}
