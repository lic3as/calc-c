#include <stdio.h>

//tentando fazer uma calculadora que imprime se o número é par ou ímpar depois de realizar a operação entre 2 números inteiros

int main(){
    int num1, num2; //os 2 números inteiros
    char operacao; //operação a ser realizada pela calculadora
    int resultado = 0; //variável de somatório pra fazer as condições depois (não tenho ctz se precisa disso msm) - precisou pra fazer as contas

    printf("Qual das operações a seguir você deseja realizar? \n+ para soma, - para subtração, * para multiplicação, / para divisão\n");
    scanf("%c", &operacao); //pedir o tipo de operação
    printf("Digite o valor do primeiro número: \n");
    scanf("%d", &num1); //pedir o num1
    printf("Digite o valor do segundo número: \n");
    scanf("%d", &num2); //pedir o num2

    if(operacao == '+'){ //o + é soma
        resultado = num1 + num2; //soma os 2
        printf("%d ", resultado); //imprime o resultado
        if(resultado%2==0) printf("=> o resultado é par."); //condição pra imprimir par
        else printf("=> o resultado é ímpar."); //condição pra imprimir ímpar
    } else if(operacao == '-'){ //o - é subtração
        resultado = num1 - num2; //subtrai os 2
        printf("%d ", resultado); //imprime o resultado
        if(resultado%2==0) printf("=> o resultado é par."); //condição pra imprimir par
        else printf("=> o resultado é ímpar."); //condição pra imprimir ímpar
    } else if(operacao == '*'){ //o * é multiplicação
        resultado = num1 * num2; //multiplica os 2
        printf("%d ", resultado); //imprime o resultado
        if(resultado%2==0) printf("=> o resultado é par."); //condição pra imprimir par
        else printf("=> o resultado é ímpar."); //condição pra imprimir ímpar
    } else if(operacao == '/'){ //a / é divisão
        resultado = num1 / num2; //divide um pelo outro
        printf("%d ", resultado); //imprime o resultado
        if(resultado%2==0) printf("=> o resultado é par."); //condição pra imprimir par
        else printf("=> o resultado é ímpar."); //condição pra imprimir ímpar
    } else printf("ALERTA: operação não suportada."); //reportar erro se a operação não for nenhuma dessas

    //hoje aprendi que não dá pra fazer resto da divisão com float, só com int

    return 0;
}
