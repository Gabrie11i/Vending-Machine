#include <stdio.h>

int main(void) {

    char li;
    int co;
    float val;
    float soma=0, troco=0;



    printf("===Maquina de Vendas===\n");
    printf("A1-Ruffles R$3,50\nA2-Doritos R$3,20\nB1-Prestigio R$2,20\n");
    printf("B2-Galak R$1,99\nC1-Pringles R$4,00\nC2-5Star R$2,90\n");
    printf("D1-7Belo R$1,80\nD2-Bis R$3,00\nE1-Coca-Cola R$3,40\nE2-Guarana R$2,99\n");

    printf("===A maquina aceita somente notas e moedas existentes!===\n");
    printf("====Digite 'S' ou 's' se quiser sair da maquina!====\n");


        printf("Selecione uma opcao: ");
        scanf(" %c %d", &li,&co);

if (li=='A'||li=='B'||li=='C'||li=='D'||li=='E') {
    if (co==1||co==2) {
        printf("Opcao valida!\n");

        switch (li) {
            case 'A':
            case 'a':
                if (co==1) {
                    printf("Produto selecionado foi Ruffle R$3,50!\n");
                    printf("Digite '0' para finalizar a incercao do valor!\n");
                    do {
                        printf("Insira o valor: ");
                        fflush(stdin);
                        scanf("%f", &val);
                        if (val==2||val==5||val==10||val==20||val==50||val==100||val==200||val==0.01||val==0.05||val==0.10||val==0.25||val==0.50||val==1||val==0) {
                            soma+=val;
                        }else {
                            printf("Valor invalido para a maquina!");
                        }
                    }while (val!=0);

                    if (soma>= 3.50) {
                        troco=soma - 3.50;
                        printf("O valor inserido foi de %f, pagamento autorizado!\n", soma);
                        if (troco>0) {
                            printf("Troco a receber: %f", troco);
                        }else {
                            printf("Nao ha troco!");
                        }

                    }else {
                        printf("Valor inserido nao e suficiente para a aquisicao do produto!");
                    }

                }else
                    if (co==2) {
                        printf("Produto selecionado foi Doritos R$3,20!\n");
                        printf("Digite '0' para finalizar a incercao do valor!\n");
                        do {
                            printf("Insira o valor: ");
                            fflush(stdin);
                            scanf("%f", &val);
                            if (val==2||val==5||val==10||val==20||val==50||val==100||val==200||val==0.01||val==0.05||val==0.10||val==0.25||val==0.50||val==1) {
                                soma+=val;
                            }else {
                                printf("Valor invalido para a maquina!");
                            }
                        }while (val!=0);

                        if (soma>= 3.20) {
                            troco=soma - 3.20;
                            printf("O valor inserido foi de %f, pagamento autorizado!\n", soma);
                            if (troco>0) {
                                printf("Troco a receber: %f", troco);
                            }else {
                                printf("Nao ha troco!");
                            }

                        }else {
                            printf("Valor inserido nao e suficiente para a aquisicao do produto!");
                        }

                    }
                break;
            case 'B':
            case 'b':
                if (co==1) {
                    printf("Produto selecionado foi Prestigio R$2,20!\n");
                    printf("Digite '0' para finalizar a incercao do valor!\n");
                    do {
                        printf("Insira o valor: ");
                        fflush(stdin);
                        scanf("%f", &val);
                        if (val==2||val==5||val==10||val==20||val==50||val==100||val==200||val==0.01||val==0.05||val==0.10||val==0.25||val==0.50||val==1) {
                            soma+=val;
                        }else {
                            printf("Valor invalido para a maquina!");
                        }
                    }while (val!=0);

                    if (soma>= 2.20) {
                        troco=soma - 2.20;
                        printf("O valor inserido foi de %f, pagamento autorizado!\n", soma);
                        if (troco>0) {
                            printf("Troco a receber: %f", troco);
                        }else {
                            printf("Nao ha troco!");
                        }

                    }else {
                        printf("Valor inserido nao e suficiente para a aquisicao do produto!");
                    }

                }else
                    if (co==2) {
                        printf("Produto selecionado foi Galak R$1,99!\n");
                        printf("Digite '0' para finalizar a incercao do valor!\n");
                        do {
                            printf("Insira o valor: ");
                            fflush(stdin);
                            scanf("%f", &val);
                            if (val==2||val==5||val==10||val==20||val==50||val==100||val==200||val==0.01||val==0.05||val==0.10||val==0.25||val==0.50||val==1) {
                                soma+=val;
                            }else {
                                printf("Valor invalido para a maquina!");
                            }
                        }while (val!=0);

                        if (soma>= 1.99) {
                            troco=soma - 1.99;
                            printf("O valor inserido foi de %f, pagamento autorizado!\n", soma);
                            if (troco>0) {
                                printf("Troco a receber: %f", troco);
                            }else {
                                printf("Nao ha troco!");
                            }

                        }else {
                            printf("Valor inserido nao e suficiente para a aquisicao do produto!");
                        }

                    }
                break;
            case 'C':
            case 'c':
                if (co==1) {
                    printf("Produto selecionado foi Pringles R$4,00!\n");
                    printf("Digite '0' para finalizar a incercao do valor!\n");
                    do {
                        printf("Insira o valor: ");
                        fflush(stdin);
                        scanf("%f", &val);
                        if (val==2||val==5||val==10||val==20||val==50||val==100||val==200||val==0.01||val==0.05||val==0.10||val==0.25||val==0.50||val==1) {
                            soma+=val;
                        }else {
                            printf("Valor invalido para a maquina!");
                        }
                    }while (val!=0);

                    if (soma>= 4.00) {
                        troco=soma - 4.00;
                        printf("O valor inserido foi de %f, pagamento autorizado!\n", soma);
                        if (troco>0) {
                            printf("Troco a receber: %f", troco);
                        }else {
                            printf("Nao ha troco!");
                        }

                    }else {
                        printf("Valor inserido nao e suficiente para a aquisicao do produto!");
                    }

                }else
                    if (co==2) {
                        printf("Produto selecionado foi 5Star R$2,90!\n");
                        printf("Digite '0' para finalizar a incercao do valor!\n");
                        do {
                            printf("Insira o valor: ");
                            fflush(stdin);
                            scanf("%f", &val);
                            if (val==2||val==5||val==10||val==20||val==50||val==100||val==200||val==0.01||val==0.05||val==0.10||val==0.25||val==0.50||val==1) {
                                soma+=val;
                            }else {
                                printf("Valor invalido para a maquina!");
                            }
                        }while (val!=0);

                        if (soma>= 2.90) {
                            troco=soma - 2.90;
                            printf("O valor inserido foi de %f, pagamento autorizado!\n", soma);
                            if (troco>0) {
                                printf("Troco a receber: %f", troco);
                            }else {
                                printf("Nao ha troco!");
                            }

                        }else {
                            printf("Valor inserido nao e suficiente para a aquisicao do produto!");
                        }

                    }
                break;
            case 'D':
            case 'd':
                if (co==1) {
                    printf("Produto selecionado foi 7Belo R$1,80!\n");
                    printf("Digite '0' para finalizar a incercao do valor!\n");
                    do {
                        printf("Insira o valor: ");
                        fflush(stdin);
                        scanf("%f", &val);
                        if (val==2||val==5||val==10||val==20||val==50||val==100||val==200||val==0.01||val==0.05||val==0.10||val==0.25||val==0.50||val==1) {
                            soma+=val;
                        }else {
                            printf("Valor invalido para a maquina!");
                        }
                    }while (val!=0);

                    if (soma>= 1.80) {
                        troco=soma - 1.80;
                        printf("O valor inserido foi de %f, pagamento autorizado!\n", soma);
                        if (troco>0) {
                            printf("Troco a receber: %f", troco);
                        }else {
                            printf("Nao ha troco!");
                        }

                    }else {
                        printf("Valor inserido nao e suficiente para a aquisicao do produto!");
                    }

                }else
                    if (co==2) {
                        printf("Produto selecionado foi Bis R$3,00!\n");
                        printf("Digite '0' para finalizar a incercao do valor!\n");
                        do {
                            printf("Insira o valor: ");
                            fflush(stdin);
                            scanf("%f", &val);
                            if (val==2||val==5||val==10||val==20||val==50||val==100||val==200||val==0.01||val==0.05||val==0.10||val==0.25||val==0.50||val==1) {
                                soma+=val;
                            }else {
                                printf("Valor invalido para a maquina!");
                            }
                        }while (val!=0);

                        if (soma>= 3.00) {
                            troco=soma - 3.00;
                            printf("O valor inserido foi de %f, pagamento autorizado!\n", soma);
                            if (troco>0) {
                                printf("Troco a receber: %f", troco);
                            }else {
                                printf("Nao ha troco!");
                            }

                        }else {
                            printf("Valor inserido nao e suficiente para a aquisicao do produto!");
                        }

                    }
                break;
            case 'E':
            case 'e':
                if (co==1) {
                    printf("Produto selecionado foi Coca-Cola R$3,40!\n");
                    printf("Digite '0' para finalizar a incercao do valor!\n");
                    do {
                        printf("Insira o valor: ");
                        fflush(stdin);
                        scanf("%f", &val);
                        if (val==2||val==5||val==10||val==20||val==50||val==100||val==200||val==0.01||val==0.05||val==0.10||val==0.25||val==0.50||val==1) {
                            soma+=val;
                        }else {
                            printf("Valor invalido para a maquina!");
                        }
                    }while (val!=0);

                    if (soma>= 3.40) {
                        troco=soma - 3.40;
                        printf("O valor inserido foi de %f, pagamento autorizado!\n", soma);
                        if (troco>0) {
                            printf("Troco a receber: %f", troco);
                        }else {
                            printf("Nao ha troco!");
                        }

                    }else {
                        printf("Valor inserido nao e suficiente para a aquisicao do produto!");
                    }

                }else
                    if (co==2) {
                        printf("Produto selecionado foi Guarana R$2,99!\n");
                        printf("Digite '0' para finalizar a incercao do valor!\n");
                        do {
                            printf("Insira o valor: ");
                            fflush(stdin);
                            scanf("%f", &val);
                            if (val==2||val==5||val==10||val==20||val==50||val==100||val==200||val==0.01||val==0.05||val==0.10||val==0.25||val==0.50||val==1) {
                                soma+=val;
                            }else {
                                printf("Valor invalido para a maquina!");
                            }
                        }while (val!=0);

                        if (soma>= 2.99) {
                            troco=soma - 2.99;
                            printf("O valor inserido foi de %f, pagamento autorizado!\n", soma);
                            if (troco>0) {
                                printf("Troco a receber: %f", troco);
                            }else {
                                printf("Nao ha troco!");
                            }

                        }else {
                            printf("Valor inserido nao e suficiente para a aquisicao do produto!");
                        }

                    }
                break;
            default:
                printf("Opcao invalida!");

        }
    }else {
        printf("Opcao invalida!");
    }
}


    return 0;
}