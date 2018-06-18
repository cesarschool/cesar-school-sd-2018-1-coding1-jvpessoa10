#include <stdio.h>



void fizzBizz(int start, int end)
{
    printf("\nFizzBizz::START: %d, %d\n", start, end);
    for(int i = start;i<end;i++){
    	printf(" ");
    	if(i%5==0 && i%3==0){
    		printf("fizzBizz");
    		continue;
    	}else if(i%3==0){
    		printf("fizz");
    	}else if(i%5==0){
    		printf("bizz");
    	}else{
    		printf("%d",i);
    	}
    	

    }
    
    
    printf("\nFizzBizz::END\n");
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: FizzBizz ###\n");
    fizzBizz(1, 6);
    fizzBizz(1, 16);
	fizzBizz(1, 100);
    
    return 0;
}
