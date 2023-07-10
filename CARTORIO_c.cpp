#include <stdio.h> //bliblioteca de comunicação com o usuario 
#include <stdlib.h>// bliblioteca de alocação de espaso de memoria
#include <locale.h>//biblioteca de alocação de texto por região
#include <string.h>//bliblioteca responsavel por cuidar da string


int registro()                                               //função responsável por cadastrar usuários
{
	char arquivo[40];                                        // inicio de variáveis/ strings                
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];                                        //final da criação de variáveis
	
	int opcao=0;                                          // variavel opção = 0
	
	
	
	printf("Digite o cpf a ser cadastrado: ");            //pedido para digitar Cpf
	scanf("%s", cpf);                                     //salvando resposta do usuário %s referi-se a string
	
	strcpy(arquivo, cpf);                                  //resposnsáveçavel por copiar o cpf
	
	FILE *file;                                            //criando o arquivo 
	file = fopen(arquivo, "w");                            //criando o arquivo "w" significa escrever	
	fprintf(file,cpf);                                     //salvando valor do arquivo
	fclose(file);                                          //fechando o arquivo
	
	file = fopen(arquivo, "a");                            //"a" significa atualizando o arquivo
	fprintf(file,"\nNOme:");                                 // colocando descrição no arquivo
	fclose(file);                                          //fechando o arquivo
	
	printf("Digite o nome a ser cadatrado: ");            //pedindo para cadastrar nome
	scanf("%s", nome);                                    //salvando resposta do usuário
	
	file = fopen(arquivo, "a");                          //"a" significa atualizando o arquivo
	fprintf(file,nome);                                  //salvando valor do arquivo
	fclose(file);                                        //fechando o arquivo
	
	file = fopen(arquivo, "a");                         //"a" significa atualizando o arquivo
	fprintf(file,"\nSobrenome:");                         // colocando descrição no arquivo
	fclose(file);                                      // fechando arquivo
	
	printf("digite seu sobrenome: ");                  //pedindo pra cadastrar sobrenome
	scanf("%s",sobrenome);                             // sanvando resposta do usuário
	
	file = fopen(arquivo, "a");                       //"a" significa atualizando o arquivo
	fprintf(file,sobrenome);                          //salvando valor do arquivo
	fclose(file);                                     // fechando arquivo
	
	file = fopen(arquivo, "a");                       //"a" significa atualizando o arquivo
	fprintf(file,"\nCargo:");                         //colocando descrição no arquivo
	fclose(file);                                     // fechando arquivo
	
	printf("Digite o seu cargo: ");                   // pedindo para cadastrar o cargo
	scanf("%s",cargo);                                // salvando resposta do usuário
	               
	file = fopen(arquivo, "a");                       //"a" significa atualizando o arquivo
	fprintf(file,cargo);                              //salvando valor do arquivo
	fclose(file);                                     // fechando arquivo
	
	system("cls");                                   // limpando tela
	printf("\n\n");                                  // pulando linha
	printf("Deseja cadastrar mais nome?\n");         // perguntando se o usuário deseja incluir nomes 
	printf("\t1 - Cadastrar mais nomes!\n");         // primeira opção
	printf("\t2 - Voltar ao menu principal:!\n\n");  // segunda opção
	printf("opção : ");                              // local para digitar opção 
	scanf("%d", &opcao);                             //salvando resposta do usuário

	system("cls");                                   //limpando tela
	
	
	switch(opcao)                                            
	{
		case 1:                                             //se o usuário desidir pela primeira opção
		printf("Voçê escolheu castrar mai nomes!\n\n");     // informanda a opção escolhida
		registro();                                         //chamando funçõa
		break;                                              // pausando
		
		case 2:                                            //se o usuário desidir pela segunda opção
		printf("Voçê escolheu voltar ao menu!\n\n");      // informando a opção escolhida
		int manin ();                                     //chamando a função
		break;                                            //pausa
		
		
		default:                                        // se caso o usuário não escolha nenhuma função valida
        printf("Opçao invalida!\n");                     // informando ao usuário
	    break;                                           // pausa
	    				
	}
	
}

int consultar()                                                    //função responsável por consultar os usuários
{
	setlocale(LC_ALL, "Portuguese");                               // definindo a linguagem
	
	char cpf[40];                                                  //inicio de variáves || strings
	char conteudo[200];                                            //fim de variáveis || strings
		
	printf("Digite o cpf a ser consultado: ");                    // pegindo que o usuário informe o "CPF"
	scanf("%s", cpf);                                             // salvando resposta do usuário

	FILE *file;                                                   //clamando o arquivo no banco de dados
	file = fopen(cpf, "r");                                       // a letra "r" é responsável por ler o arquivo
	
	if(file == NULL)                                             // se caso o arquivo for inexistenre 
	{
		printf("cpf não localizado!.\n");                       // informanda ao usuário
	}
	
	while(fgets(conteudo, 200, file) !=NULL)                   
	{
	    printf("%s", conteudo);                                   //exibindo conteudo 
	    printf("\n\n");                                           //pulando linhas
	    
	}
	
	system("pause");                                              // pausando 
	
	int opcao =0;                                                //definindo opção = 0
	
	system("cls");                                              // limpando tela
	printf("Deseja consultar mais nomes?\n");                   // perguntando ao usuário
	printf("\t1-Consultar mais nomes!\n");                     // opção de resposta 1 do usuário
	printf("\t2-Voltar ao menu!\n\n");                         // opção de resposta 2 do usuário
	printf("Opção: ");                                         // lugar de resposta 
	scanf("%d", &opcao);                                       //salvando resposta do usuário
	system("cls");                                             // limpando tela
	
	switch(opcao)
	{
		case 1:                                               // se o usuário selecionar 1º opção 
		printf("Você escolheu consultar mais nomes!\n");      // informando opção escolhida
		consultar();                                          //chamando a função escolhida
		break;                                                // pausando 
		
		case 2:                                               // se o usiário selecionar 2º opção 
		printf("Você escolheu voltar ao menu!\n");            // informando opção escolhida
		int main ();                                          //chamando função do usuário
		break;                                                // pausando 
		
		default:                                             // se o usuario escolher opção invalida
		printf("Opção invalida!\n");                         //informando ao usuário
		break;                                               //pausando
	}
	
	fclose(file);                                            // fechando arquivo
	
}

int deletar()                                               // iniciando função deletar
{
	char cpf[40];                                           // definindo variaveis || strings
	
	printf("Digite o cpf do usuário  a ser deletado: ");    //pedindo ao usuário o "CPF"
	scanf("%s",cpf);                                        //sanvando resposta do usuário
	
		
	FILE *file;                                             // chamando arquivo no banco de dados
	file = fopen(cpf ,"r");                                 // o "R" significa ler o arquivo
	fclose(file);                                           //fechando arquivo
	
	if(file != NULL)                                       //se a opçãp for diferente de nulo
	{
		printf("Cpf deletado com susseço.\n");             // informando ao usuário
		system("pause");                                   // pausando 
		
	}
	
	if(file == NULL)                                     // se a opção for = a nulo
	{
		
		printf("opção inválida.\n");                    // informando ao usuário
		printf("\n\n");                                 // "\n" significa pular linha
		system("pause");                                // pausando 
		
	}
	
	remove(cpf);                                       // removendo cpf do arquivo
	
	int opcao=0;                                      // variavel opção =0
	
    system("cls");                                    // limpando tela
    printf("Deseja deletar mais algum Cpf?\n");       // perguntando ao usuário
    printf("\t1-Deletar mais nomes.\n");              // 1º opção do usuário
    printf("\t2-voltar ao menu principal.\n");        //2º opção do usuário 
    printf("Opção: ");                                // local para resposta 
    scanf("%d", &opcao);                              // salvando opção do usuário
    system("cls");                                    //limpando tela
     
    switch(opcao)                                    // iniciando opções
    {
    	case 1:                                           // se escolher a 1º opção 
    	printf("você escolheu Deletar mais nomes!\n");    // informando ao usuário
    	deletar();                                        // chamando a opção 
    	break;                                            // pausando 
    	
    	case 2:                                           // se o usuário escolher a 2º opção 
    	printf("Você escolheu voltar ao menu!\n");        // informando ao usuário
    	int main ();                                      //chamando a função 
    	break;                                            //pausando 
    	
		default:                                         //se a opção do usuario for invlalida 
        printf("Opçao invalida!\n");                     // informando ao usuário
	    break;                                           //pausando 
	    
	}


    
}

int main() //Definindo variaveis 
{
    int opcao=0;                                                  // variavel opção = 0
     
    int laco=1;                                                   // definindo laco = 1
    
    for(laco=1;laco=1;)                                           //definindo repetição 
    {
    	
    	system("cls");                                            //limpando tela
 	
    	setlocale(LC_ALL, "Portuguese");                             // definindo a linguagem
	                            
    	printf("### BEM VINDO AO CARTÓRIO DA EBAC! ###\n\n");        //Apresentação de programa 
  	    printf("Escolha a opção deseja: \n\n");                     //inicio do menu
  	    printf("\t1 - Registrar nomes\n");                         
 	    printf("\t2 - Consultar nomes\n"); 
    	printf("\t3 - Deletar nomes\n\n");
    	printf("Opção : ");                                        //fim do menu
	
    	scanf("%d", &opcao);                                     // armazenando a escolha do usuário
	
    	system("cls");                                           // função de deletar tela 
    	
    	switch(opcao)
    	{
    		case 1:                                           // se o usuário escolher a 1º opção 
    		registro();                                       //clamando a função principal
			break;                                           //pausndo
			 
			case 2:                                          //se o usuário escolher a 2º opção 
			consultar();                                     // chamndo a função 
		    break;                                           //pausando
		    
		    case 3:                                          //se o usuário escolher a 2º opção 
		    deletar();                                       //chmando a função 
        	break;                                           // pausando 
        	
        	default:                                          // se a opção do usuário for invalida
        	printf("Opçao invalida!\n");                      //informando ao usuário
	    	break;                                            //pausando
	    		
		}
	
	    system("pause");                                    //pausando 
	
    }    
}
