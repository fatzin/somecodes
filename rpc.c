#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int usrScore = 0, compScore = 0;
void checkOpt(int usr, int comp){
    //1 = pedra 2=papel 3=tesoura (Pedra = Rock, 2 = Paper, 3 = Scissors)
    if (usr == comp){
        printf(" ------------------\n");
        printf("|     Empate!      |\n");
        printf(" ------------------\n");
    }
    else if(usr == 3){
        if (comp == 2){
            printf(" --------------------\n");
            printf("|  Voce venceu! :)   |\n");
            printf("|Sua Escolha:Tesoura |\n");
            printf("| Computador: Papel  |\n");
            printf(" --------------------\n");
            usrScore++;

        }
        else {
            printf(" -------------------\n");
            printf("| Voce perdeu! :(   |\n");
            printf("|Sua Escolha:Tesoura|\n");
            printf("|Computador:Pedra   |\n");
            printf(" -------------------\n");
            compScore++;
        }
    }
    else if (usr == 1){
        if(comp == 3){
            printf(" ------------------\n");
            printf("|  Voce venceu! :) |\n");
            printf("|Sua Escolha: Pedra|\n");
            printf("|Computador:Tesoura|\n");
            printf(" ------------------\n");
            usrScore++;
        } 
        else{
            printf(" ------------------\n");
            printf("|  Voce perdeu! :(  |\n");
            printf("| Sua Escolha:Pedra |\n");
            printf("| Computador: Papel |\n");
            printf(" ------------------\n");
            compScore++;
        } 
    }
    else if (usr == 2){
        if(comp == 1){
            printf(" ------------------\n");
            printf("|   Voce venceu! :) |\n");
            printf("| Sua Escolha:Papel |\n");
            printf("| Computador: Pedra |\n");
            printf(" ------------------\n");
            usrScore++;
        } 
        else{
            printf(" ------------------\n");
            printf("|  Voce perdeu! :(  |\n");
            printf("| Sua Escolha:Papel |\n");
            printf("| Computador:Tesoura|\n");
            printf(" ------------------\n");
            compScore++;
        }
    }
    else if(usr == 4){
        printf(" ------------------\n");
        if(usrScore > compScore){
        printf("|   Voce venceu!   |\n");
        }
        else if (usrScore < compScore){
        printf("|   Voce perdeu!   |\n");
        }
        else {
         printf("|      Empate!     |\n");
        }
        printf("|     Resultado    |\n");
        printf("|     Voce: %d      |\n", usrScore);
        printf("|   Computador: %d  |\n", compScore);
        printf(" ------------------\n");
        
    }   
}

int main(){

    int esc, compEsc;
    srand(time(0));
    printf("\t\t\t\t=============|Bem-Vindo ao Pedra, papel e tesoura|============");
    while (esc != 4){

    printf("\nPor favor escolha uma opcao: ");
    printf("\n1.Pedra");
    printf("\n2.Papel");
    printf("\n3.Tesoura");
    printf("\n4.Sair\n");
    
    scanf("%d", &esc);
    
    compEsc = (rand() % 3)+1;
    checkOpt(esc, compEsc);


    } 

}