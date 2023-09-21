#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

void limparTerminal() {
    printf("\033[H\033[J"); 
}

//protótipo da função
int valor (char plano, char tipoAdesao[10], char periodo[8]);

int main()
{
    setlocale(LC_ALL,"");
    char plano; // tipo primitivo
    char periodo[8], nome[200], tipoAdesao[10], nomePlano[50];// estrutura de dados
    printf("Bem vindo a @FiqueFit (:\n");
    printf("Escolha um dos planos:\na) Natação \nb) Musculação\nc) Treinamento Funcional\nd) Plano seco: musculação + funcional\ne) Plano molhado: musculação + natação\n");
    scanf ("%c",&plano);
    limparTerminal();

    switch (plano){
        case 'a':
        strcpy(nomePlano,  "Natação");
        break;
        
        case 'b':
        strcpy(nomePlano,  "Musculação");
        break;
        
        case 'c':
        strcpy(nomePlano,  "Treinamento Funcional");
        break;
        
        case 'd':
        strcpy(nomePlano,  "Plano seco: musculação + funcional");
        break;
        
        case 'e':
        strcpy(nomePlano,  "Plano molhado: musculação + natação");
        break;
        
        default:
                printf("Opção inválida! Tente novamente.");
                system("cls");
                break;
        
    }
    
    printf("Digite o período desejado (dia ou noite)\n");
    scanf ("%s",periodo);
    
    printf("Digite o nome do cliente\n");
    scanf ("\n%[^\n]s",nome);
    
    if ((plano == 'd') || (plano == 'e')){
        strcpy(tipoAdesao, "anual");
    } else {
    printf("Digite o tipo da adesão desejada (mensal ou anual)\n");
    scanf ("%s",tipoAdesao);
    }
    
    int valorMensal = valor(plano, tipoAdesao, periodo);

    limparTerminal();
    printf("Cliente: %s\n", nome);
    printf("%s ( %s )\n", nomePlano, periodo);
    printf("Pagamento %s\n", tipoAdesao);

    if (strcmp(tipoAdesao, "anual") == 0) {
        int total = valorMensal * 12;
        printf("12 x R$ %i\n", valorMensal);
        printf("Total: %i\n", total);
    }else{
        printf("R$ %i\n", valorMensal);
    }

    return 0;
}


//função preco
int valor (char plano, char tipoAdesao[10], char periodo[8]){

        int valor, total;

        switch(plano){

        case 'a':
        if ((strcmp(tipoAdesao, "mensal") == 0) && (strcmp(periodo, "dia") == 0)) {
            valor = 220;
        } else if ((strcmp(tipoAdesao, "mensal") == 0) && (strcmp(periodo, "noite") == 0)) {
            valor = 270;
        } else if (strcmp(tipoAdesao, "anual") == 0) {
            valor = 198;
        } else {
            printf("Erro!\n");
        }
        break;
        
        case 'b':
        if (strcmp(tipoAdesao, "mensal") == 0) {
            valor = 110;
        } else if (strcmp(tipoAdesao, "anual") == 0) {
            valor = 100;
        } else {
            printf("Erro!\n");
        }
        break;


       case 'c':
        if (strcmp(tipoAdesao, "mensal") == 0) {
            valor = 200;
        } else if (strcmp(tipoAdesao, "anual") == 0) {
            valor = 180;
        } else {
            printf("Erro!\n");
        }
        break;

        case 'd':
        if (strcmp(tipoAdesao, "mensal") == 0) {
            printf("Não há plano mensal para esta assinatura!");
        } else if (strcmp(tipoAdesao, "anual") == 0) {
            valor = 280;
        } else {
            printf("Erro!\n");
        }
        break;
        
        case 'e':
        
        if(strcmp(tipoAdesao, "mensal") == 0){
                printf("Não há plano mensal para esta assinatura!");
                }else if(strcmp(tipoAdesao, "anual") == 0){
                        valor = 298;
                }else{
                        printf("Erro\n");
                }

        break;
        
        default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        
    }
    

        return valor;

}
