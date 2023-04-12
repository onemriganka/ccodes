# include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main() { 
int number;

srand(time(0));
number = rand()%100+1;

// printf("the random number is = %d\n",number );

int  guess,numguess=1;

do
{
    printf("enter the number u guessed=");
    scanf("%d",& guess);

    if (guess>number){
        printf("gess a lower number\n ");
    }

    else if(guess<number){
        printf("guess a higher number\n");}

        else{
           printf("u gessed the number is %d attempt\n",numguess
           );
            }
        numguess++;
        
}

    
 while (guess!=number);



return 0;
}