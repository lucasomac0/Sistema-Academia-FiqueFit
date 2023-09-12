#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <stdlib.h>


//protótipo da função
int valor (char plano, char tipoAdesao[6]);

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
        
        default:
        	printf("Opção inválida! Tente novamente.");
        	system("cls");
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
    printf("%i", valor(plano, tipoAdesao));
    
    return 0;
}



//função preco
int valor (char plano, char tipoAdesao[6]){
	
	int valor, total;
	
	switch(plano){
		
	    case 'a':
	    	
        if(strcmp(tipoAdesao, "mensal") == 0){
        	valor = 220;
		}else if(strcmp(tipoAdesao, "anual") == 0){
			valor = 198;
			total = valor * 12;
			printf("12 x R$ %i\n", valor);
			printf("Total : %i", total);
		}else{
		 	printf("Erro!");
   		}
   		
        break;
        
        case 'c':
        
        if(strcmp(tipoAdesao, "mensal") == 0){
        	valor = 200;
		}else if(strcmp(tipoAdesao, "anual") == 0){
			valor = 180;
		}else{
			printf("Erro");
		}
		
        break;
        
        case 'd':
        
        if(strcmp(tipoAdesao, "mensal") == 0){
        	printf("Não há plano mensal para esta assinatura!");
		}else if(strcmp(tipoAdesao, "anual") == 0){
			valor = 280;
		}else{
			printf("Erro");
		}
		
        break;
        
        case 'e':
        	
        if(strcmp(tipoAdesao, "mensal") == 0){
        	printf("Não há plano mensal para esta assinatura!");
		}else if(strcmp(tipoAdesao, "anual") == 0){
			valor = 298;
		}else{
			printf("Erro");
		}
		
        break;
        
        default:
        	printf("Opção inválida! Tente novamente.");
        	break;
        
    }
    
	
	return valor;
	
}
