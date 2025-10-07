#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <ctype.h>

int menor(){

    float num1, num2;
    float maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if(num1 > num2){
        maior = num1;
        menor = num2;
    }
    else{
        maior = num2;
        menor = num1;
    }

    printf("\nMenor: %.f\n", menor);

}

float Pot(float x , int n){
    float res;
    int i;

    for(i = 1, res = 1.0; i <= n; i++){
        res *= x;
    }

    return res;
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    /*Exercicio 1*/

    /*char c;

    printf("Digite um valor: \n");
    scanf("%c", &c);

    if(isdigit(c) == true){
        printf("%c é um digito\n", c);
    }
    else{
        printf("%c nao é um digito\n", c);
    }*/

    /*Exercicio 2*/

    char ch;
    printf("Digite uma letra: \n");
    scanf("%c", &ch);
    char maiscula = toupper(ch);
    printf("A letra %c maiscula e:%c\n", ch, maiscula);

    /*Exercicio 3*/

    printf("%.2f %.2f %.2f\n", Pot(2.0, 4), Pot(1.234, 3), Pot(3.0, 0));

    /*Exercicio 4*/
    menor();
    return 0;
}
