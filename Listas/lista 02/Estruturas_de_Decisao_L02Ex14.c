#include <stdio.h>
int main(){

    int entrada, saida, duracao, duracao1, tempo;
    double saida1, entrada1;
    scanf("%d %d", &entrada, &saida);

    duracao = saida - entrada;
    tempo = saida - entrada;

    if (duracao <= 15){ //essa parte está certo, eu acho
        printf("Entrada: %d\n", entrada);
        printf("Saida: %d\n", saida);
        printf("Duracao(min): %d\n", duracao);
        printf("Preco(centavos): %d\n", duracao * 0);}
        else
            if (duracao > 15 && duracao <=100 ){
                printf("Entrada: %d\n", entrada);
                printf("Saida: %d\n", saida);
                printf("Duracao(min): %d\n", duracao);
                printf("Preco(centavos): %d\n", duracao * 30);}
        else
            if (duracao > 100 && duracao <= 200 ){
                duracao1 = 1800; // valor pago durante a primeira hora
                tempo *=0.6;
                duracao *=0.6;
                duracao -=60; //retirada da primeira hora
                duracao *= 20;
                printf("Entrada: %d\n", entrada);
                printf("Saida: %d\n", saida);
                printf("Duracao(min): %d\n", tempo);
                printf("Preco(centavos): %d\n", duracao + duracao1);}
        else
            if (duracao > 200){
                duracao1 = 3000; // valor pago durante a primeira hora e segunda hora

                tempo *=0.6;
                duracao *=0.6;
                duracao -=120; //retirada das 2 primeiras horas
                duracao *= 10;
                printf("Entrada: %d\n", entrada);
                printf("Saida: %d\n", saida);
                printf("Duracao(min): %d\n", tempo);
                printf("Preco(centavos): %d\n", duracao + duracao1);}

return 0;
}
