#include <stdio.h>


int main(){
	
	int num;
	
	
	
	printf("\t\t\tRaqam kiriting juft va toq ekanini aniqlaymiz\n");
	printf("1)");
	scanf("%d", &num);
	
	
	if(num % 2 == 0){
		printf("Bu son juft son: %d", num);
	}
	
	else{
		printf("Bu son toq son: %d", num);
	}
}
