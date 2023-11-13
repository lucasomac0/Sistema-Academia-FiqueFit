#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

#define TAM 20

void limparTerminal() {
    printf("\033[H\033[J"); 
    //Sequencia de ANSI
    // \033 inicia a sequencia de ANSI
    // [H joga o mouse para a posição inicial (1,1) "Home"
    // \033 inicia novamente
    //[J deleta da posição do pause até o final do terminal
}

int entrada(int *entradaNum, int inicioIntervalo, int fimIntervalo) {
    while (1) {
        if (scanf("%i", entradaNum) == 1 && *entradaNum >= inicioIntervalo && *entradaNum <= fimIntervalo) {
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    }
    return *entradaNum;
}

char *entradaString(char *entradaString, char *stringUm, char *stringDois){
    while(1){
            scanf ("%s", entradaString);
            if (strcmp(entradaString, stringUm) == 0 || strcmp(entradaString, stringDois) == 0){
                break;
            } else {
                printf("Opção inválida. Tente novamente.\n");
            }
        }
    return entradaString;
}

void telaInicial(){
    printf("⠀⠀⠀⠀⠀⠀⣀⣀⣀⠀⣴⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣷⡄⠀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠶⠿⢶⣄⠀⢸⡿⠿⠀⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡿⠿⠀⡆⠀⣤⠀\n⠀⠀⠀⠀⠀⢸⣿⣿⣿⡇⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡇⣾⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡿⠀⣴⠶⡶⠹⡄⢸⡇⠀⠀⡄⠀⣴⣤⡄⢠⡄⢠⡄⠀⣤⣦⠀⢸⡇⠀⠀⡄⠠⣿⠤\n⠀⠀⠀⠀⠀⢸⣿⣿⣿⡇⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⣸⠃⢰⡇⠀⡇⢸⡟⠛⠀⡇⢸⡇⠀⡇⢸⡇⢸⡇⢸⣇⣸⡇⢸⡟⠛⠀⡇⠀⣿⠀\n⠀⠀⠀⢸⣿⢸⣿⣿⣿⡇⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⡇⣿⡇⠀⠀⠀⠀⠀⠀⠀⢸⡄⠹⣦⠾⣀⠾⠀⢸⡇⠀⠀⡇⢸⡇⠀⡇⢸⡇⢸⡇⢸⡇⢠⡄⢸⡇⠀⠀⡇⠀⣿⠀\n⠀⠀⠀⢸⣿⢸⣿⣿⣿⡇⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⡇⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠿⣄⣀⣀⣀⠀⠀⠘⠃⠀⠀⠃⠀⠛⠛⡇⠀⠛⠙⠃⠀⠛⠛⠀⠘⠃⠀⠀⠃⠀⠛⠛\n⠀⠀⠀⠀⠀⢸⣿⣿⣿⡇⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⢸⣿⣿⣿⡇⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡇⢿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀Bem-vindo(a)!\n⠀⠀⠀⠀⠀⠀⠉⠉⠉⠀⠻⣿⣿⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⡿⠃⠀⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀Aperte enter para entrar no programa:\n");
}

void formataCpf(char *cpf) {
    char aux[20];
    int j = 0;

    while (1) {
        scanf(" %s", aux);
        if (strlen(aux) == 11) {
            strcpy(cpf, "xxx.xxx.xxx-xx");

            for (int i = 0; i < strlen(cpf); i++) {
                if (cpf[i] == 'x') {
                    cpf[i] = aux[j];
                    j++;
                }
            }
            break;
        } else {
            printf("Número de CPF inválido. Digite novamente.\n");
        }
    }
}

void formataTelefone(char *telefone) {
    char aux[20];
    int j = 0;

    while (1) {
        scanf(" %s", aux);
        if (strlen(aux) == 10) {
            strcpy(telefone, "(xx) xxxx-xxxx");

            for (int i = 0; i < strlen(telefone); i++) {
                if (telefone[i] == 'x') {
                    telefone[i] = aux[j];
                    j++;
                }
            }
            break;
        }else if(strlen(aux) == 11){
            strcpy(telefone, "(xx) xxxxx-xxxx");

            for (int i = 0; i < strlen(telefone); i++) {
                if (telefone[i] == 'x') {
                    telefone[i] = aux[j];
                    j++;
                }
            }
            break;
        }else {
            printf("Número de telefone inválido. 10 ou 11 numeros suportados.\n");
        }
    }
}

//protótipo da função
int valor (char plano, char tipoAdesao[10], char periodo[8]);

void adesao(char periodo[TAM][8], char nome[TAM][200], char tipoAdesao[TAM][10], char nomePlano[TAM][50], int *indiceAdesao);

void profissional(char nomePersonal[TAM][200], char enderecoPersonal[TAM][200], char emailPersonal[TAM][200], char tipoDeContrato[TAM][50], char cpfPersonal[TAM][20], char telefonePersonal[TAM][20], int credenciamento[TAM], int inicioDiaPersonal[TAM], int inicioMesPersonal[TAM], int inicioAnoPersonal[TAM], float valorPersonalHr[TAM], int *indiceProfissional);

int main(){
    setlocale(LC_ALL,""); //funcao para permitir caracteres especiais
   
    //Adesao: estrutura de dados
    char periodo[TAM][8], nome[TAM][200], tipoAdesao[TAM][10], nomePlano[TAM][50]; 
    // profissionais: estrutura de dados
    char nomePersonal[TAM][200], enderecoPersonal[TAM][200], emailPersonal[TAM][200], tipoDeContrato[TAM][50], cpfPersonal[TAM][20], telefonePersonal[TAM][20];

    int credenciamento[TAM], inicioDiaPersonal[TAM], inicioMesPersonal[TAM], inicioAnoPersonal[TAM];
    float valorPersonalHr[TAM];
    
    //variaveis globais
    int num, inicioIntervalo, fimIntervalo;
    int indiceAdesao = 0, indiceProfissional = 0, sair;


    //limparTerminal();
    telaInicial();
    getchar();
	
    while(1){
        limparTerminal();
        printf("[1] Adesão\n[2] Acompanhamento\n[3] Agendamento de aula experimental\n[4] Rescisão de contrato\n[5] Clientes\n[6] Profissionais da academia\n[7] Sair\n");
        entrada(&num,1,7);
        sair = 0;
        switch (num){
            case 1:
                adesao(periodo, nome, tipoAdesao, nomePlano, &indiceAdesao);
                sair = 0;
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
            break;
            case 6:
               profissional(nomePersonal, enderecoPersonal, emailPersonal, tipoDeContrato, cpfPersonal, telefonePersonal, credenciamento,inicioDiaPersonal, inicioMesPersonal, inicioAnoPersonal, valorPersonalHr, &indiceProfissional);
               sair = 0;
            break;
            case 7:
                sair = 1;
            break;
        }
        if (sair){
            limparTerminal();
            break;
        }
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
           }else if((strcmp(tipoAdesao, "mensal") == 0) && (strcmp(periodo, "noite") == 0)) {
               valor = 270;
           }else if(strcmp(tipoAdesao, "anual") == 0) {
               valor = 198;
           }else{
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
          }else if(strcmp(tipoAdesao, "anual") == 0) {
              valor = 180;
          }else{
              printf("Erro!\n");
          }

          break;

        case 'd':
           if (strcmp(tipoAdesao, "mensal") == 0) {
               printf("Não há plano mensal para esta assinatura!");
           }else if(strcmp(tipoAdesao, "anual") == 0) {
               valor = 280;
           }else{
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

void adesao(char periodo[TAM][8], char nome[TAM][200], char tipoAdesao[TAM][10], char nomePlano[TAM][50], int *indiceAdesao){
    
    //estrutura de dados locais
    char periodoAdesao[8], nomeAdesao[200], tipoAdesaoAdesao[10], nomePlanoAdesao[50];
    
    char plano;
    int num, sair = 0;

    while(1){
        limparTerminal();
        printf("Escolha um dos planos:\na) Natação \nb) Musculação\nc) Treinamento Funcional\nd) Plano seco: musculação + funcional\ne) Plano molhado: musculação + natação\nf) Voltar\n");
        
        //Enquanto a entrada não ser uma das opções desejadas ele irá retornar opção inválida
        while(1){
            scanf (" %c",&plano);
            if((plano >= 'a' && plano <= 'f')){
                    break;
                } else {
                    printf("Opção inválida. Tente novamente.\n");
                }
        }
        
        limparTerminal();

        //processamento do input do plano
        switch (plano){
            case 'a':
            strcpy(nomePlanoAdesao,  "Natação");
            break;
            
            case 'b':
            strcpy(nomePlanoAdesao,  "Musculação");
            break;
            
            case 'c':
            strcpy(nomePlanoAdesao,  "Treinamento Funcional");
            break;
            
            case 'd':
            strcpy(nomePlanoAdesao,  "Plano seco: musculação + funcional");
            break;
            
            case 'e':
            strcpy(nomePlanoAdesao,  "Plano molhado: musculação + natação");
            break;

            case 'f':
            sair = 1;
            break;
            
            default:
                printf("Opção inválida! Tente novamente.");
                system("cls");
                break;
            
        }

        if (sair){
            break;
        }
        
        //entrada de dados
        //Enquanto o periodo for diferente de dia e noite ele retorna opção invalida
        printf("Digite o período desejado (dia ou noite)\n"); 
        entradaString(periodoAdesao, "dia" , "noite");
        
        printf("Digite o nome do cliente\n");
        scanf ("\n%[^\n]s",nomeAdesao);
        
        /*Como os planos 'd' e 'e' nao possuem plano mensal, ja processamos eles
        como 'anual' aqui para economizar memória e linhas nas condicionais posteriores*/
        if ((plano == 'd') || (plano == 'e')){
            strcpy(tipoAdesaoAdesao, "anual");
        }else{
            printf("Digite o tipo da adesão desejada (mensal ou anual)\n");
            entradaString(tipoAdesaoAdesao, "mensal", "anual");
        }
        
        //calculo do valor da mensalidade, chamando a funcao valor
        int valorMensal = valor(plano, tipoAdesaoAdesao, periodoAdesao);

        //saida de dados
        limparTerminal();
        printf("Cliente: %s\n", nomeAdesao);
        printf("%s ( %s )\n", nomePlanoAdesao, periodoAdesao);
        printf("Pagamento %s\n", tipoAdesaoAdesao);

        //processamento dos pagamentos baseado na escolha do tipo de adesao 
        if (strcmp(tipoAdesaoAdesao, "anual") == 0) {
            int total = valorMensal * 12;
            printf("12 x R$ %i\n", valorMensal);
            printf("Total: %i\n", total);
        }else{
            printf("R$ %i\n", valorMensal);
        }

        //Opções de Saida:

        printf("\n\n[1] Alterar Dados\n[2] Salvar e cadastrar outro cliente\n[3] Salvar e sair\n[4] Voltar\n");
        entrada(&num,1,4);
        
        switch (num){
            case 1:
                sair = 0;
            break;
            case 2:
                strcpy(nome[*indiceAdesao], nomeAdesao);
                strcpy(tipoAdesao[*indiceAdesao], tipoAdesaoAdesao);
                strcpy(periodo[*indiceAdesao], periodoAdesao);
                strcpy(nomePlano[*indiceAdesao], nomePlanoAdesao);
                sair = 0;
                indiceAdesao++;
            break;
            case 3:
                strcpy(nome[*indiceAdesao], nomeAdesao);
                strcpy(tipoAdesao[*indiceAdesao], tipoAdesaoAdesao);
                strcpy(periodo[*indiceAdesao], periodoAdesao);
                strcpy(nomePlano[*indiceAdesao], nomePlanoAdesao);
                sair = 1;
                (*indiceAdesao)++;
            break;
            case 4:
                sair = 1;
                break;

        }
        if (sair){
            break;   
        }
    
    }
}

void profissional(char nomePersonal[TAM][200], char enderecoPersonal[TAM][200], char emailPersonal[TAM][200], char tipoDeContrato[TAM][50], char cpfPersonal[TAM][20], char telefonePersonal[TAM][20], int credenciamento[TAM], int inicioDiaPersonal[TAM], int inicioMesPersonal[TAM], int inicioAnoPersonal[TAM], float valorPersonalHr[TAM], int *indiceProfissional){

    char personal[200], endereco[200], email[200], contrato[50], cpf[20], telefone[20];
    int credenciamentoPersonal, inicioDia, inicioMes, inicioAno;
    float valorHr;
    int num, sair = 0, sairSubSistema= 0;

    while(1){
        limparTerminal();
        printf("[1] Cadastrar Profisional\n[2] Alterar dados do Profissional\n[3] Ver Profissionais cadastrados\n[4] Voltar\n");

        entrada(&num, 1, 4);
        
        switch (num){
            //cadastrar profissionais
            case 1:
            while(1){
                limparTerminal();
                printf("Digite o nome do professor/personal:\n");
                scanf(" %[^\n]s", &personal);
                printf("Digite o numero do credenciamento no CONFEF/CREFs:\n");
                scanf("%i", &credenciamentoPersonal);
                printf("Digite o endereço do profissional:\n");
                scanf(" %[^\n]s", &endereco);
                printf("Digite o telefone para contato do profissional (somente números):\n");
                formataTelefone(telefone);
                printf("Digite o e-mail do profissional:\n");
                scanf(" %[^\n]s", &email);
                printf("Digite o CPF do profissional (sem pontuações):\n");
                formataCpf(cpf);
                printf("Digite o tipo de contrado do proffisional (autônomo, CLT, estágiário):\n");
                scanf(" %[^\n]s", &contrato);
                printf("Digite o valor (por hora):\n");
                scanf("%f", &valorHr);
                printf("Digite a data de inicio do personal (dd/mm/aaaa):\n");
                scanf("%d/%d/%d", &inicioDia, &inicioMes, &inicioAno);
                printf("\n\n[1] Alterar dados\n[2] Salvar e cadastrar outro\n[3] Salvar e sair\n[4] Voltar\n");
                entrada(&num,1,4);

                switch(num){
                    case 1:
                    sairSubSistema = 0;
                    sair = 0;
                    break;
                    case 2: 
                    strcpy(nomePersonal[*indiceProfissional],personal);
                    strcpy(enderecoPersonal[*indiceProfissional], endereco);
                    strcpy(emailPersonal[*indiceProfissional], email);
                    strcpy(cpfPersonal[*indiceProfissional] ,cpf);
                    strcpy(tipoDeContrato[*indiceProfissional], contrato);
                    strcpy(telefonePersonal[*indiceProfissional], telefone);
                    credenciamento[*indiceProfissional] = credenciamentoPersonal;
                    valorPersonalHr[*indiceProfissional] = valorHr;
                    inicioDiaPersonal[*indiceProfissional] = inicioDia;
                    inicioMesPersonal[*indiceProfissional] = inicioMes;
                    inicioAnoPersonal[*indiceProfissional] = inicioAno;
                    (*indiceProfissional)++;
                    sairSubSistema = 0;
                    sair = 0;
                    break;
                    case 3:
                    strcpy(nomePersonal[*indiceProfissional],personal);
                    strcpy(enderecoPersonal[*indiceProfissional], endereco);
                    strcpy(emailPersonal[*indiceProfissional], email);
                    strcpy(cpfPersonal[*indiceProfissional] ,cpf);
                    strcpy(tipoDeContrato[*indiceProfissional], contrato);
                    strcpy(telefonePersonal[*indiceProfissional], telefone);
                    credenciamento[*indiceProfissional] = credenciamentoPersonal;
                    valorPersonalHr[*indiceProfissional] = valorHr;
                    inicioDiaPersonal[*indiceProfissional] = inicioDia;
                    inicioMesPersonal[*indiceProfissional] = inicioMes;
                    inicioAnoPersonal[*indiceProfissional] = inicioAno;
                    (*indiceProfissional)++;
                    sairSubSistema = 1;
                    sair = 0;
                    break;
                    case 4:
                    sairSubSistema = 1;
                    sair = 0;
                }
                if (sairSubSistema){
                    break;
                }
            }
            break;
            case 2:
                //Código para alterar dados do profissional.
                limparTerminal();
                printf("[0] Voltar\nDigite o nome do profissional que deseja alterar:\n");
                int local, res;

                while(1){
                    char nomeEditar[200];
                    scanf(" %[^\n]s", &nomeEditar);
                    res = 0;
                    
                    if (strcmp(nomeEditar, "0") == 0){
                        limparTerminal();
                        sair = 0;
                        break;
                    }else {
                        int linhas = *indiceProfissional;
                        for (int i = 0; i < linhas; i++){
                            if (strcmp(nomeEditar, nomePersonal[i]) == 0){
                                res = 1;
                                local = i;
                                break;
                            }
                        }
                    }

                    if (res){
                        break;
                    }else{
                        printf("Profissional não encontrado\n");
                    }  
                }
                
                if (res){
                    while(1){
                        limparTerminal();
                        printf("\nNome: %s\n", nomePersonal[local]);
                        printf("Credenciamento: %d\n", credenciamento[local]);
                        printf("Endereço: %s\n", enderecoPersonal[local]);
                        printf("Telefone: %s\n", telefonePersonal[local]);
                        printf("Email: %s\n", emailPersonal[local]);
                        printf("CPF: %s\n", cpfPersonal[local]);
                        printf("Tipo de Contrato: %s\n", tipoDeContrato[local]);
                        printf("Valor por Hora: %.2f\n", valorPersonalHr[local]);
                        printf("Data de Início: %d/%d/%d\n", inicioDiaPersonal[local], inicioMesPersonal[local], inicioAnoPersonal[local]);
                        printf("\n---------------------\nO que deseja alterar?\n[1] Nome\n[2] Credenciamento\n[3] Endereço\n[4] Telefone\n[5] E-mail\n[6] CPF\n[7] Tipo do Contrato\n[8] Preço por hora\n[9] Data Inicio\n[0] Voltar ao menu anterior\n");

                        entrada(&num,0,9);
                        sairSubSistema = 0;
                        switch(num){
                            case 0:
                            sair = 0;
                            sairSubSistema = 1;
                            break;
                            case 1:
                            limparTerminal();
                            printf("Nome atual: %s\n", nomePersonal[local]);
                            printf("Digite o nome para alterar:\n");
                            scanf(" %[^\n]s", nomePersonal[local]);
                            break;
                            case 2:
                            limparTerminal();
                            printf("Credenciamento atual: %d\n", credenciamento[local]);
                            printf("Digite o numero do credenciamento para alterar:\n");
                            scanf("%d", &credenciamento[local]);
                            break;
                            case 3:
                            limparTerminal();
                            printf("Endereço atual: %s\n", enderecoPersonal[local]);
                            printf("Digite o endereço para alterar:\n");
                            scanf(" %[^\n]s", enderecoPersonal[local]);
                            break;
                            case 4:
                            limparTerminal();
                            printf("Telefone: %s\n", telefonePersonal[local]);
                            printf("Digite o telefone para alterar:\n");
                            formataTelefone(telefonePersonal[local]);
                            break;
                            case 5: 
                            limparTerminal();
                            printf("Email: %s\n", emailPersonal[local]);
                            printf("Digite o e-mail para alterar:\n");
                            scanf(" %[^\n]s", emailPersonal[local]);
                            break;
                            case 6:
                            limparTerminal();
                            printf("CPF: %s\n", cpfPersonal[local]);
                            printf("Digite o CPF para alterar:\n");
                            formataCpf(cpfPersonal[local]);
                            break;
                            case 7:
                            limparTerminal();
                            printf("Tipo de Contrato: %s\n", tipoDeContrato[local]);
                            printf("Digite o contrato para alterar:\n");
                            scanf(" %[^\n]s", tipoDeContrato[local]);
                            break;
                            case 8:
                            limparTerminal();
                            printf("Valor por Hora: %.2f\n", valorPersonalHr[local]);
                            printf("Digite o valor para alterar:\n");
                            scanf("%f", &valorPersonalHr[local]);
                            break;
                            case 9:
                            limparTerminal();
                            printf("Data de Início: %d/%d/%d\n", inicioDiaPersonal[local], inicioMesPersonal[local], inicioAnoPersonal[local]);
                            printf("Digite a data para alterar (dd/mm/aaaa):\n");
                            scanf("%d/%d/%d", &inicioDiaPersonal[local], &inicioMesPersonal[local], &inicioAnoPersonal[local]);
                            break;
                        }
                        if (sairSubSistema){
                            break;
                        }
                    }
                }
            break;
            case 3:
            while(1){
                limparTerminal();
                //ver profissionais
                int linhas = *indiceProfissional;
                int contador = 1;
                for (int i = 0; i < linhas; i++){
                    printf("[%i] - %s\n", contador, nomePersonal[i]);
                    contador++;
                }
                printf("[0] - Voltar\n");
                printf("\nDigite o indice para ver os dados completos:\n");
                entrada(&num, 0, linhas);
                if(num!=0){
                    num--;
                    limparTerminal();
                    printf("Nome: %s\n", nomePersonal[num]);
                    printf("Credenciamento: %d\n", credenciamento[num]);
                    printf("Endereço: %s\n", enderecoPersonal[num]);
                    printf("Telefone: %s\n", telefonePersonal[num]);
                    printf("Email: %s\n", emailPersonal[num]);
                    printf("CPF: %s\n", cpfPersonal[num]);
                    printf("Tipo de Contrato: %s\n", tipoDeContrato[num]);
                    printf("Valor por Hora: %.2f\n", valorPersonalHr[num]);
                    printf("Data de Início: %d/%d/%d\n", inicioDiaPersonal[num], inicioMesPersonal[num], inicioAnoPersonal[num]);
                    printf("\nPressione enter para voltar.\n");
                    getchar();
                    getchar();
                }else{
                    break;
                }
            }   
            break;
            case 4:
            sair = 1;
            break;
        }
        if (sair){
            break;
        }
    }           
}
