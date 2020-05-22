#include <stdio.h>
int main()
{
    float imc, altura, peso;
    scanf("%f %f", &peso, &altura);
    imc = peso / (altura * altura);
    if ( imc < 20)
        printf("ABAIXO\n");
    else if (imc >=20 && imc <25)
        printf("NORMAL\n");
    else if (imc >=25 && imc < 30)
        printf("SOBREPESO\n");
    else if (imc >=30 && imc <40)
        printf("OBESO");
    else
        printf("MORBIDO");

return 0;
}
