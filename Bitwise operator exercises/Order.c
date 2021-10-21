#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 

int main()
{
    int num, order = -1, i;

    printf("Raqam kiriting: ");
    scanf("%d", &num);

    for(i=0; i<INT_SIZE; i++)
    {
        if((num>>i) & 1){
        	 order = i;
		}
    }
    if (order != -1){
    	 printf("Eng yuqori buyurtma biti %d order %d", num, order);
	}
    else {
    	 printf("0 belgilangan bitlar yo'q.");
	}
       
    return 0;
}
