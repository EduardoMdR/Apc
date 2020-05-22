#include <stdio.h>
#include <math.h>

int main(){

    char operacao;
    double numero1, numero2, numero3, delta, resultado1, resultado2;//delta, resultado1/2 so serão usados em bhaskara
    int num1, num2, num3; //servem para identificar numeros inteiros
    scanf("%c", &operacao);

    switch(operacao){
        case '+':       //soma
            scanf("%lf %lf", &numero1, &numero2);
            printf("%.3lf", numero1 + numero2);
            break;

        case '-':       //subtração
            scanf("%lf %lf", &numero1, &numero2);
            printf("%.3lf", numero1 - numero2);
            break;

        case '*':       //multiplicação
            scanf("%lf %lf", &numero1, &numero2);
            printf("%.3lf", numero1 * numero2);
            break;

        case '/':       //divisão
            scanf("%lf %lf", &numero1, &numero2);
            if (numero2 == 0)
            printf("ERROR!");
            else
            printf("%.3lf", numero1 / numero2);
            break;

        case '%':       //Modulo (erro)
            scanf("%lf %lf", &numero1, &numero2);
            num1 = numero1;
            num2 = numero2;
            if (numero1 == 0 || numero2 == 0)
                printf("ERROR");
            else
                if (num1 == numero1 && num2 == numero2) //verificar se os numeros são inteiros
                    if (numero1 > numero2){ // verificar a ordem em que irei fazer os modulos
                        numero3 = numero1 - numero2;
                        printf("%.3lf", numero3);}
                    else{
                        numero3 = numero2 - numero1;
                        printf("%.3lf", numero3);}

                else
                    printf("ERROR");

            break;

        case 'p':       //potencia (erro)
            scanf("%lf %lf", &numero1, &numero2);
            num2 = numero2;
                if (numero1 < 0 && numero2 == num2){
                    numero3 = pow(numero1,numero2);
                    printf("%.3lf", numero3);}
                    else
                        if (numero1 > 0){
                            numero3 = pow(numero1,numero2);
                            printf("%.3lf", numero3);}
                            else
                                printf("ERROR");
            break;

        case 'r':       //raiz
            scanf("%lf", &numero1);
            if (numero1 < 0)
                printf("ERROR!");
            else{
                numero2 = pow(numero1,1./2);
                printf("%.3lf", numero2);
            break;

        case 'b':      //fazer bhaskara
            scanf("%lf %lf %lf", &numero1, &numero2, &numero3);
            delta = pow(numero2,2) - (4*numero1*numero3);
            if (numero1  == 0)
                printf("ERROR");
            else
                if (delta > 0){     //delta > 0 = 2 raizes
                    resultado1= (-numero2 + sqrt(delta)) / (2 * numero1);
                    resultado2= (-numero2 - sqrt(delta)) / (2 * numero1);
                    printf("%.3lf  %.3lf", resultado1, resultado2);}
                else
                    if (delta == 0){     //delta = 0 = 1 raiz
                        resultado1 = - numero2 / (2 * numero1);
                        printf("%.3lf", resultado1);}
                    else{                       //delta < 0 = nenhuma raiz
                        printf("ERROR");}
            break;

        default:
            printf("ERROR!");

    }
    }


return 0;
}
