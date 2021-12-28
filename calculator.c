#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
    char operator;
    double first, second;
    printf("Escolha a operação ( + , - , * , / ): ");
    scanf("%c", &operator);

    printf("Insira os dois numeros: \n");
    scanf("%lf %lf", &first, &second);

     switch (operator)
     {
     case '+':
        printf("%.2lf + %.2lf = %.2lf", first, second,(first + second));
         break;

     case '-':
        printf("%.2lf - %.2lf = %.2lf", first, second,(first - second));
         break;

    case '*':
        printf("%.2lf * %.2lf = %.2lf", first, second,(first * second));
         break;

    case '/':
    if( second != 0.0 )
        printf("%.2lf / %.2lf = %.2lf", first, second,(first / second));
        else 
        printf("Nao foi possivel dividir\n");
         break;
     
     default:
        printf("Operacao Invalida!\n");
         break;
     }

    return 0;
}