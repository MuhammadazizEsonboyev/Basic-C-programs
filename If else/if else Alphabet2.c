#include <stdio.h>


int main(){
	char ch;
	
	printf("Har qanday belgi kiriting: ");
	scanf("%c", &ch);
	
	
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch == 'Z')){
		printf("%c Alfabitda bor ", ch);
	}
	
	else if(ch >= '0' && ch <= '9'){
		printf("Raqam kiritdingiz %c", ch);
	}
	else{
		printf("Maxsus belgi %c: ", ch);
	}
	
	return 0;
}
