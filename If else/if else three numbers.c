#include <stdio.h>



int main(){
	int num1;
	int num2;
	int num3;
	int max;
	
	printf("\t\t\tuchta raqam kiriting:\n");
	scanf("%d %d %d", &num1 , &num2, &num3);
	
	if(num1 > num2){
		if(num1 > num3){
		max = num1;	
	}
		else{
			max = num3;
		}
	}
	else{
		if(num2 > num3){
			max = num2;
		}
		else{
			max = num3;
		}
	}
	 printf("Eng katta raqam bu = %d", max);


	

 
	
	
	
}

//#include <stdio.h>
//
//int main()
//{
//    int num1, num2, num3, max;
//
//    /* Input three numbers from user */
//    printf("Enter three numbers: ");
//    scanf("%d%d%d", &num1, &num2, &num3);
//    
//
//    if(num1 > num2)
//    {
//        if(num1 > num3)
//        {
//            max = num1;
//        }
//        else
//        {
//            max = num3;
//        }
//    }
//    else
//    {
//        if(num2 > num3)
//        {
//            max = num2;
//        }
//        else
//        {
//            max = num3;
//        }
//    }
//    
//    /* Print maximum value */
//    printf("Maximum among all three numbers = %d", max);
//
//    return 0;
//}
