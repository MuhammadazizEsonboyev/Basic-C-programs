#include <stdio.h>


int main(){
	char ch;
	
	printf("Har qanday harf kiriting:");
	scanf("%c", &ch);
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
		printf("Belgilar alifboda bor");
	}
	else{
		printf("Belgilar alifboda yoq");
	}
	return 0;
}
