// We will wirte a program that generates a random number and asks player to guess it. If the player's guess is higher than the actual number, the program displays "Lower number please". Similarly, if user's guess is too low,the program prints "Higher number please".

// When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number. 

// Hint: Use loop & use a random number generator.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main(){
    // Initialize random number generator
    srand(time(0));
    int guessed;

    // Generate random number between 1 to 100
    int randomNumber=(rand() % 100)+1;
    int no_of_guesses = 0;

    do{
        printf("Guess the number ");
        scanf("%d",&guessed);
        if(guessed>randomNumber) printf("Guess Lower Number\n");
        else if(guessed<randomNumber) printf("Guess Higher number\n");
        else printf("Congrats!\n");
        no_of_guesses++;
    
    } while(guessed != randomNumber);

    printf("You guess the number in %d in guesses\n", no_of_guesses);


    // Print random number
    printf("Random Number : %d\n" , randomNumber);
    return 0;
}