#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int cash;
void Play(int bet){
    char C[3] = {'J', 'Q', 'K'}; //Jocker, Queen, King
    printf("Shuffling . . .");
    srand(time(NULL)); //seeding random number generator
    int i;
    for(i=0;i<5;i++)
    {
      int x = rand() % 3; // 0, 1 , 2
      int y = rand() % 3; // 0, 1 , 2 
      int temp = C[x];
      C[x] = C[y];
      C[y] = temp; // swap characters at position x and y 5 times

    }

    int playerGuess;
    printf("\nWhats the position of queen - 1, 2 or 3?    ");
    scanf("%d", &playerGuess);
    if(C[playerGuess - 1] == 'Q')
    {
      cash += 2*bet; // value means the odd of the bet 1.5*bet 2.0*bet 1.3*bet
      printf("You win! Result\" %c%c%c \" Total cash = $%d\n", C[0],C[1],C[2], cash);
    }
    else{
      cash -= bet;
      printf("You lose! Result = \" %c%c%c \" Total cash = $%d\n", C[0],C[1],C[2], cash);
    }


}
int main(){
    int bet;
    printf("\n\t\t\t\t--------| Welcome to the Virtual Casino|--------\n");
    printf("How many cash will you use?\n");
    scanf("%d", &cash);
    printf("Total cash = $%d\n", cash);
    while(cash>0){
        printf("What's your bet? $");
        scanf("%d", &bet);
        if(bet == 0 || bet>cash) break;
        Play(bet);
        printf("\n*********************************************\n");
    }
}