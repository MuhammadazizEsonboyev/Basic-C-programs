#include <stdio.h>

int main()
{
    int num;

    printf("Xoxlagan raqamingizni kiriting: ");
    scanf("%d", &num);

    if(num & 1){
    	printf("LSB of %d sozlandi (1).", num);
	}
        
    else{
    	printf("LSB of %d sozlanmagan (0).", num);
	}
        

    return 0;
}

//#include <stdio.h>
//
//int main()
//{
//    int num, n, bitStatus;
//
//    printf("Enter any number: ");
//    scanf("%d", &num);
//
//
//    printf("Enter nth bit to check (0-31): ");
//    scanf("%d", &n);
//
//    bitStatus = (num >> n) & 1;
//
//    printf("The %d bit is set to %d", n, bitStatus);
//
//    return 0;
//}









