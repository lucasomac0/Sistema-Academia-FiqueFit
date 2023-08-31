#include<stdio.h>
#include<string.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"");
    char plano; // tipo primitivo
    char periodo[5], nome[999], tipoAdesao[6], nomePlano[50];// estrutura de dados
    printf("Bem vindo a @FiqueFit (:\n");
    printf("Escolha um dos planos:\na) Natação \nb) Musculação\nc) Treinamento Funcional\nd) Plano seco: musculação + funcional\ne) Plano molhado: musculação + natação\n");
    scanf ("%c",&plano);
    
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
        
        
    }
    
    printf("Digite o período desejado (dia ou noite)\n");
    scanf ("%s",periodo);
    
    printf("Digite o nome do cliente\n");
    scanf ("%s",nome);
    
    printf("Digite o tipo da adesão desejada (mensal ou anual)\n");
    scanf ("%s",tipoAdesao);
    
    printf("Cliente: %s\n", nome);
    printf("%s ( %s )\n",nomePlano,periodo);
    printf("Pagamento %s\n", tipoAdesao);
    
    return 0;
}
