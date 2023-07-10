#include <stdio.h> //bliblioteca de comunica��o com o usuario 
#include <stdlib.h>// bliblioteca de aloca��o de espaso de memoria
#include <locale.h>//biblioteca de aloca��o de texto por regi�o
#include <string.h>//bliblioteca responsavel por cuidar da string


int registro()                                               //fun��o respons�vel por cadastrar usu�rios
{
	char arquivo[40];                                        // inicio de vari�veis/ strings                
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];                                        //final da cria��o de vari�veis
	
	int opcao=0;                                          // variavel op��o = 0
	
	
	
	printf("Digite o cpf a ser cadastrado: ");            //pedido para digitar Cpf
	scanf("%s", cpf);                                     //salvando resposta do usu�rio %s referi-se a string
	
	strcpy(arquivo, cpf);                                  //resposns�ve�avel por copiar o cpf
	
	FILE *file;                                            //criando o arquivo 
	file = fopen(arquivo, "w");                            //criando o arquivo "w" significa escrever	
	fprintf(file,cpf);                                     //salvando valor do arquivo
	fclose(file);                                          //fechando o arquivo
	
	file = fopen(arquivo, "a");                            //"a" significa atualizando o arquivo
	fprintf(file,"\nNOme:");                                 // colocando descri��o no arquivo
	fclose(file);                                          //fechando o arquivo
	
	printf("Digite o nome a ser cadatrado: ");            //pedindo para cadastrar nome
	scanf("%s", nome);                                    //salvando resposta do usu�rio
	
	file = fopen(arquivo, "a");                          //"a" significa atualizando o arquivo
	fprintf(file,nome);                                  //salvando valor do arquivo
	fclose(file);                                        //fechando o arquivo
	
	file = fopen(arquivo, "a");                         //"a" significa atualizando o arquivo
	fprintf(file,"\nSobrenome:");                         // colocando descri��o no arquivo
	fclose(file);                                      // fechando arquivo
	
	printf("digite seu sobrenome: ");                  //pedindo pra cadastrar sobrenome
	scanf("%s",sobrenome);                             // sanvando resposta do usu�rio
	
	file = fopen(arquivo, "a");                       //"a" significa atualizando o arquivo
	fprintf(file,sobrenome);                          //salvando valor do arquivo
	fclose(file);                                     // fechando arquivo
	
	file = fopen(arquivo, "a");                       //"a" significa atualizando o arquivo
	fprintf(file,"\nCargo:");                         //colocando descri��o no arquivo
	fclose(file);                                     // fechando arquivo
	
	printf("Digite o seu cargo: ");                   // pedindo para cadastrar o cargo
	scanf("%s",cargo);                                // salvando resposta do usu�rio
	               
	file = fopen(arquivo, "a");                       //"a" significa atualizando o arquivo
	fprintf(file,cargo);                              //salvando valor do arquivo
	fclose(file);                                     // fechando arquivo
	
	system("cls");                                   // limpando tela
	printf("\n\n");                                  // pulando linha
	printf("Deseja cadastrar mais nome?\n");         // perguntando se o usu�rio deseja incluir nomes 
	printf("\t1 - Cadastrar mais nomes!\n");         // primeira op��o
	printf("\t2 - Voltar ao menu principal:!\n\n");  // segunda op��o
	printf("op��o : ");                              // local para digitar op��o 
	scanf("%d", &opcao);                             //salvando resposta do usu�rio

	system("cls");                                   //limpando tela
	
	
	switch(opcao)                                            
	{
		case 1:                                             //se o usu�rio desidir pela primeira op��o
		printf("Vo�� escolheu castrar mai nomes!\n\n");     // informanda a op��o escolhida
		registro();                                         //chamando fun��a
		break;                                              // pausando
		
		case 2:                                            //se o usu�rio desidir pela segunda op��o
		printf("Vo�� escolheu voltar ao menu!\n\n");      // informando a op��o escolhida
		int manin ();                                     //chamando a fun��o
		break;                                            //pausa
		
		
		default:                                        // se caso o usu�rio n�o escolha nenhuma fun��o valida
        printf("Op�ao invalida!\n");                     // informando ao usu�rio
	    break;                                           // pausa
	    				
	}
	
}

int consultar()                                                    //fun��o respons�vel por consultar os usu�rios
{
	setlocale(LC_ALL, "Portuguese");                               // definindo a linguagem
	
	char cpf[40];                                                  //inicio de vari�ves || strings
	char conteudo[200];                                            //fim de vari�veis || strings
		
	printf("Digite o cpf a ser consultado: ");                    // pegindo que o usu�rio informe o "CPF"
	scanf("%s", cpf);                                             // salvando resposta do usu�rio

	FILE *file;                                                   //clamando o arquivo no banco de dados
	file = fopen(cpf, "r");                                       // a letra "r" � respons�vel por ler o arquivo
	
	if(file == NULL)                                             // se caso o arquivo for inexistenre 
	{
		printf("cpf n�o localizado!.\n");                       // informanda ao usu�rio
	}
	
	while(fgets(conteudo, 200, file) !=NULL)                   
	{
	    printf("%s", conteudo);                                   //exibindo conteudo 
	    printf("\n\n");                                           //pulando linhas
	    
	}
	
	system("pause");                                              // pausando 
	
	int opcao =0;                                                //definindo op��o = 0
	
	system("cls");                                              // limpando tela
	printf("Deseja consultar mais nomes?\n");                   // perguntando ao usu�rio
	printf("\t1-Consultar mais nomes!\n");                     // op��o de resposta 1 do usu�rio
	printf("\t2-Voltar ao menu!\n\n");                         // op��o de resposta 2 do usu�rio
	printf("Op��o: ");                                         // lugar de resposta 
	scanf("%d", &opcao);                                       //salvando resposta do usu�rio
	system("cls");                                             // limpando tela
	
	switch(opcao)
	{
		case 1:                                               // se o usu�rio selecionar 1� op��o 
		printf("Voc� escolheu consultar mais nomes!\n");      // informando op��o escolhida
		consultar();                                          //chamando a fun��o escolhida
		break;                                                // pausando 
		
		case 2:                                               // se o usi�rio selecionar 2� op��o 
		printf("Voc� escolheu voltar ao menu!\n");            // informando op��o escolhida
		int main ();                                          //chamando fun��o do usu�rio
		break;                                                // pausando 
		
		default:                                             // se o usuario escolher op��o invalida
		printf("Op��o invalida!\n");                         //informando ao usu�rio
		break;                                               //pausando
	}
	
	fclose(file);                                            // fechando arquivo
	
}

int deletar()                                               // iniciando fun��o deletar
{
	char cpf[40];                                           // definindo variaveis || strings
	
	printf("Digite o cpf do usu�rio  a ser deletado: ");    //pedindo ao usu�rio o "CPF"
	scanf("%s",cpf);                                        //sanvando resposta do usu�rio
	
		
	FILE *file;                                             // chamando arquivo no banco de dados
	file = fopen(cpf ,"r");                                 // o "R" significa ler o arquivo
	fclose(file);                                           //fechando arquivo
	
	if(file != NULL)                                       //se a op��p for diferente de nulo
	{
		printf("Cpf deletado com susse�o.\n");             // informando ao usu�rio
		system("pause");                                   // pausando 
		
	}
	
	if(file == NULL)                                     // se a op��o for = a nulo
	{
		
		printf("op��o inv�lida.\n");                    // informando ao usu�rio
		printf("\n\n");                                 // "\n" significa pular linha
		system("pause");                                // pausando 
		
	}
	
	remove(cpf);                                       // removendo cpf do arquivo
	
	int opcao=0;                                      // variavel op��o =0
	
    system("cls");                                    // limpando tela
    printf("Deseja deletar mais algum Cpf?\n");       // perguntando ao usu�rio
    printf("\t1-Deletar mais nomes.\n");              // 1� op��o do usu�rio
    printf("\t2-voltar ao menu principal.\n");        //2� op��o do usu�rio 
    printf("Op��o: ");                                // local para resposta 
    scanf("%d", &opcao);                              // salvando op��o do usu�rio
    system("cls");                                    //limpando tela
     
    switch(opcao)                                    // iniciando op��es
    {
    	case 1:                                           // se escolher a 1� op��o 
    	printf("voc� escolheu Deletar mais nomes!\n");    // informando ao usu�rio
    	deletar();                                        // chamando a op��o 
    	break;                                            // pausando 
    	
    	case 2:                                           // se o usu�rio escolher a 2� op��o 
    	printf("Voc� escolheu voltar ao menu!\n");        // informando ao usu�rio
    	int main ();                                      //chamando a fun��o 
    	break;                                            //pausando 
    	
		default:                                         //se a op��o do usuario for invlalida 
        printf("Op�ao invalida!\n");                     // informando ao usu�rio
	    break;                                           //pausando 
	    
	}


    
}

int main() //Definindo variaveis 
{
    int opcao=0;                                                  // variavel op��o = 0
     
    int laco=1;                                                   // definindo laco = 1
    
    for(laco=1;laco=1;)                                           //definindo repeti��o 
    {
    	
    	system("cls");                                            //limpando tela
 	
    	setlocale(LC_ALL, "Portuguese");                             // definindo a linguagem
	                            
    	printf("### BEM VINDO AO CART�RIO DA EBAC! ###\n\n");        //Apresenta��o de programa 
  	    printf("Escolha a op��o deseja: \n\n");                     //inicio do menu
  	    printf("\t1 - Registrar nomes\n");                         
 	    printf("\t2 - Consultar nomes\n"); 
    	printf("\t3 - Deletar nomes\n\n");
    	printf("Op��o : ");                                        //fim do menu
	
    	scanf("%d", &opcao);                                     // armazenando a escolha do usu�rio
	
    	system("cls");                                           // fun��o de deletar tela 
    	
    	switch(opcao)
    	{
    		case 1:                                           // se o usu�rio escolher a 1� op��o 
    		registro();                                       //clamando a fun��o principal
			break;                                           //pausndo
			 
			case 2:                                          //se o usu�rio escolher a 2� op��o 
			consultar();                                     // chamndo a fun��o 
		    break;                                           //pausando
		    
		    case 3:                                          //se o usu�rio escolher a 2� op��o 
		    deletar();                                       //chmando a fun��o 
        	break;                                           // pausando 
        	
        	default:                                          // se a op��o do usu�rio for invalida
        	printf("Op�ao invalida!\n");                      //informando ao usu�rio
	    	break;                                            //pausando
	    		
		}
	
	    system("pause");                                    //pausando 
	
    }    
}
