#include <stdio.h>


int main(){
	int num;
	
	printf("Raqam kiriting: ");
	scanf("%d", &num);
	
	
	
	if((num % 5 == 0) && (num % 11 == 0)){
		printf("Bu raqam 11 ga va 5 ga bo'linadi");
	}
	else{
		printf("Bu raqam 11 ga va 5 ga bo'linmaydi");
	}
	
	
	return 0;
	
}
