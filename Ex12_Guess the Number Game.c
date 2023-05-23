#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num;
	int guess;
	
	num = rand() % 100;
	
	printf("Enter your guess: ");
	scanf("%d", &guess);
	
	do{
		if (guess >= num){
			printf("Too high! \n");
		}
		else 
      		printf("Too low! \n");
			
	printf("Enter your guess: ");
	scanf("%d", &guess);
	
	} while (guess != num);
	
	return 0;
}
