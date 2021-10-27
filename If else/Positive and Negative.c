#include <stdio.h>


int main(){
	int num;
	
	printf("Raqam kiriting: ");
	scanf("%d", &num);
	
	
	if(num > 0){
		printf("Bu raqam ijobiy %d", num);
	}
	else if(num < 0){
		printf("Bu raqam salbiy %d", num);
	}
	else if(num == 0){
		printf("Bu raqam %d", num);
	}
	
	return 0;
}
