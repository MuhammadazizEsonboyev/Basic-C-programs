#include <stdio.h>


int main(){
	int num1; 
	int num2;
	
	
	printf("\t\t\t\t|ikkta raqam kiriting|\n");
	printf("Birinchi raqam: ");
	scanf("%d", &num1);
	printf("ikkinchi raqamni kiriting: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("Katta %d", num1);
	}
	else if(num1 == num2){
		printf("ikkala raqamham teng: ");
	}
	 else if(num2 > num1){
		printf("Katta %d", num2);
	}
	
	return 0;
}
