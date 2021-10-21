#include <stdio.h>

int main(){
	int num;
	int n;
	int newNum;
	
	printf("Raqam kiriting: ");
	scanf("%d", &num);
	
	printf("O'rnatish uchun (n) tugmasini bosing: ");
	scanf("%d", &n);
		
	newNum = (1 << n) | num;
	
	printf("Bit muvoffaqqiyatli o'rnatildi \n\n");
	printf("O'rnatishdan avval raqam %d bit: %d (o'nlik kasirda)\n", n , num);
	printf("O'rnatishdan keyn raqam %d bit: (o'nlik kasirda)\n", n , newNum);
	
	return 0;
	
}













