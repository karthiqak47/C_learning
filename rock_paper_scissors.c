//program for implementing a rps game 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//function for the game logic 
int game(char you , char machine) {
    if (you == machine)
        return -1;   // draw

    // Rock vs Paper
    if (you == 'r' && machine == 'p')
        return 0;   // you lose
    else if (you == 'p' && machine == 'r')
        return 1;   // you win

    // Rock vs Scissors
    if (you == 'r' && machine == 's')
        return 1;   // you win
    else if (you == 's' && machine == 'r')
        return 0;   // you lose

    // Paper vs Scissors
    if (you == 'p' && machine == 's')
        return 0;   // you lose
    else if (you == 's' && machine == 'p')
        return 1;   // you win

    return -2;  
}

int main()
{
    int n;

    char you, computer, result;

    // Chooses the random number
    // every time
    srand(time(NULL));

    // Make the random number less
    // than 100, divided it by 100
    n = rand() % 100;

    // Using simple probability 100 is
    // roughly divided among stone,
    // paper, and scissor
    if (n < 33)

        // s is denoting Stone
        computer = 's';

    else if (n > 33 && n < 66)

        // p is denoting Paper
        computer = 'p';

    // z is denoting Scissor
    else
        computer = 'z';

    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

    // input from the user
    scanf("%c", &you);

    // Function Call to play the game
    result = game(you, computer);

    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    }
    else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    }
    else { 
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }
        printf("\t\t\t\tYOu choose : %c and Computer choose : %c\n",you, computer);

    return 0;
}
