#include <stdio.h>


int main(){
	int week;
	printf("Hafta kunlarini kiriting: ");
	scanf("%d", &week);
	
	if(week == 1){
		printf("Dushanba");
	}
	
	else if(week == 2){
		printf("Seshanba");
	}
	
	else if(week == 3){
		printf("Chorshanba");
	}
	
	else if(week == 4){
		printf("Payshanba");
	}
	
	else if(week == 5){
		printf("Juma");
	}
	
	else if(week == 6){
		printf("Shanba");
	}
	
	else if(week == 7){
		printf("Yakshanba");
	}
	
	else{
		printf("Xato");
	}
	return 0;
}
