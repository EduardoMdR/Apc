#include <stdio.h> //funcao 0 e 1 funcionando

int main(){

    int tarefa, i, j, N;
    scanf("%d %d", &tarefa, &N); //qual terefa fazer e quantas colunas (pessoas) vao ter
    float passageiro[N][7], media[6]={0};
    char passageiro2[N][2];
    int teste[2][3]={0}, testezinho[N][1];
    int matriz[2][100]={0}, k = 0; //for case2
    int matriz2[2][10]={0};        //for case3

    for (i = 0; i < N; i++){
            //printf("Classe Sexo Idade Irmaos Filhos Porto\n");
        scanf("%f %c %f %f %f %c %f", &passageiro[i][0], &passageiro2[i][0], &passageiro[i][2], &passageiro[i][3], &passageiro[i][4], &passageiro2[i][1], &passageiro[i][6]);
        testezinho[i][0]=passageiro[i][0];
    }

    switch (tarefa){
    case 0: //concluido
        for (i = 0; i < N; i++){
            switch (testezinho[i][0]){
                case 1:
                    if (passageiro[i][6] == 1)
                        teste[0][0] += 1;
                        else
                            teste[1][0] += 1;
                break;
                case 2:
                    if (passageiro[i][6] == 1)
                        teste[0][1] += 1;
                        else
                            teste[1][1] += 1;
                break;
                case 3:
                    if (passageiro[i][6] == 1)
                        teste[0][2] += 1;
                        else
                            teste[1][2] += 1;
                break;
            }
        }
        for(i = 1; i >= 0; i--){
            for(j = 0; j < 3; j++){
                printf("%d ", teste[i][j]);
            }
            printf("\n");
        }
        break;
        case 1: //concluido
            for (i = 0; i < N; i++){
                switch (passageiro2[i][0]){ //atribuir valor numerico ao sexo
                    case 'f':
                        if(passageiro[i][6] == 0)//morreu
                        teste[0][1] += 1; //f=1
                        else
                            teste[1][1] += 1;
                        break;
                    case 'm':
                        if(passageiro[i][6] == 0)
                            teste[0][0] += 1; //m=0
                        else
                            teste[1][0] += 1;
                        break;
                }
            }
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    printf("%d ", teste[i][j]);
                }
                printf("\n");
            }
        break;
        case 2: //concluido
            for (i = 0; i < N; i++){
                k = passageiro[i][2];
                if(k < 100){
                    if(passageiro[i][6] == 0)//idade
                        matriz[0][k] += 1;
                        else
                            matriz[1][k] += 1;
                }else{                      //trucar na idade 99
                    if(passageiro[i][6] == 0)//idade
                        matriz[0][99] += 1;
                        else
                            matriz[1][99] += 1;
                }
            }
            for(i = 0; i < 2; i++){
                for(j = 0; j < 100; j++){
                    printf("%d ", matriz[i][j]);
                }
                printf("\n");
            }
        break;
        case 3: //concluido
            for(i = 0; i < N; i++){
                k = passageiro[i][3];
                if(k < 10){
                    if(passageiro[i][6] == 0)//idade
                        matriz[0][k] += 1;
                        else
                            matriz[1][k] += 1;
                }else{                       //truncar caso tenha mais que 10 irmao
                    if(passageiro[i][6] == 0)//idade
                        matriz[0][9] += 1;
                        else
                            matriz[1][9] += 1;
                }
            }
            for(i = 0; i < 2; i++){
                for(j = 0; j < 10; j++){
                    printf("%d ", matriz[i][j]);
                }
                printf("\n");
            }
        break;
        case 4: //concluido
            for(i = 0; i < N; i++){
                k = passageiro[i][4];
                if(k < 10){
                    if(passageiro[i][6] == 0)//idade
                        matriz[0][k] += 1;
                        else
                            matriz[1][k] += 1;
                }else{                       //truncar caso tenha mais que 10 irmao
                    if(passageiro[i][6] == 0)//idade
                        matriz[0][9] += 1;
                        else
                            matriz[1][9] += 1;
                }
            }
            for(i = 0; i < 2; i++){
                for(j = 0; j < 10; j++){
                    printf("%d ", matriz[i][j]);
                }
                printf("\n");
            }
        break;
        case 5: //concluido
            for (i = 0; i < N; i++){
                switch (passageiro2[i][1]){
                    case 'S':
                        if (passageiro[i][6] == 1)
                            teste[0][0] += 1;
                            else
                                teste[1][0] += 1;
                    break;
                    case 'C':
                        if (passageiro[i][6] == 1)
                            teste[0][1] += 1;
                            else
                                teste[1][1] += 1;
                    break;
                    case 'Q':
                        if (passageiro[i][6] == 1)
                            teste[0][2] += 1;
                            else
                                teste[1][2] += 1;
                    break;
                }
            }
            for(i = 1; i >= 0; i--){
                for(j = 0; j < 3; j++){
                    printf("%d ", teste[i][j]);
                }
                printf("\n");
            }
        break;
        case 6:

        break;
        case 7:

        break;
    }

    return 0;
}
