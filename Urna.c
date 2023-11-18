#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    /*Aqui tem eleitores, candidatos, porcentagem dos votos, resultados dos votos, loop.*/
  	int insert = 0, eleitor = 0, voto = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0, invalido = 0;
	float pc1 = 0, pc2 = 0, pc3 = 0, pc4 = 0, pnulo = 0, pbranco = 0, fimLoop = 0, total = 0;
	
	/*Perguntando ao usuario se a quantidade de eleitores sera definida ou nao.*/
    printf("Digite '1' para definir o número de eleitores ou '2' para o que voto seja dado indefinidamente: ");
    
    while(scanf("%d", &insert) != 1) {
    	printf("-------------------\n");
        printf("Entrada inválida!");
        printf("\n-------------------");
		printf("\nDigite novamente: ");
        while (getchar() != '\n');
    }

    /*Caso seja definida pelo numero 1:*/
    if(insert == 1){
    	/*Nessa parte a gente usa a variavel(numero de eleitores) que foi definida pelo usuario.*/
        printf("Digite o número de eleitores: ");
        scanf("%d", &eleitor);
        
      	    for(insert = 0; insert < eleitor; insert++){
      	    	printf("\n\n----------------- LISTA CANDIDATOS E OPCOES ----------------- ");
		    	printf("\n\nCandidato 1 - Toddy");
		    	printf("\n\nCandidato 2 - Charlotte");
		    	printf("\n\nCandidato 3 - Sophia");
		    	printf("\n\nCandidato 4 - Siren");
		    	printf("\n\nOpção 5 - Voto Nulo");
		    	printf("\n\nOpção 6 - Voto Branco");
		    	printf("\n\n----------------- OUTRAS OPCOES -----------------------------");
		    	printf("\n\nOpção 7 - Digite 00 para encerrar a votação e ver a apuração.\n");
		    	printf("\nOpção 8 - Digite 11 para somente encerrar a votação.\n");
		    	
		    	printf("\n-------------------------------------------------------------");
		    	printf("\n\nDigite o seu voto: ");
            	scanf("%d",&voto);
            	
            	/*Switch para evitar-se o uso de inumeros if...else*/
		        switch(voto){
		        	/*Ir para apuracao. Aqui temos os possiveis casos(caminhos) que o usuario pode inserir.*/
		    		case 00:
		    			printf("\n\n\n******  VOTAÇÃO ENCERRADA. Veja a apuração abaixo!  ******\n");
		    			printf("\n\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
                        fimLoop=1;
		    			break;
		    		case 1:
		    			c1++;
		    			printf("\n\n\n ****** Toddy - VOTO REGISTRADO ****** \n\n");
		    			break;
		    		case 2:
		    			c2++;
		    			printf("\n\n\n ****** Charlotte - VOTO REGISTRADO ****** \n\n");
		    			break;
		    		case 3:
		    			c3++;
		    			printf("\n\n\n ****** Sophia - VOTO REGISTRADO ****** \n\n");
		    			break;
		    		case 4:
		    			c4++;
		    			printf("\n\n\n ****** Siren - VOTO REGISTRADO ****** \n\n");
		    			break;
		    		case 5:
		    			nulo++;
		    			printf("\n\n\n ****** Voto Nulo - VOTO REGISTRADO ****** \n\n\n");
		    			break;
		    		case 6:
		    			branco++;
		    			printf("\n\n\n ****** Voto branco - VOTO REGISTRADO ****** \n\n\n");
		    			break;
		    		case 11:
              printf("\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
		    			printf("\nVotação encerrada.\n");
              printf("\n\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
                        return 0;
		    			break;
                    default:
                        invalido++;
		    		    printf("\n\n\n ****** VOTO INVÁLIDO ****** \n\n\n");
		    		    break;
		    	}

        if(fimLoop==1) break;
        
     	    }
       }
  /*Caso o usuario opte por uma votacao onde os eleitores nao estao definidos.*/
    else if(insert == 2){
    	
    /*Loop indefinido que depende de uma resposta do usuario para encerrar.*/
        while(fimLoop!=1){
		    printf("\n\n ----------------- LISTA CANDIDATOS E OPCOES ----------------- \n");
		    printf("\n\nCandidato 1 - Toddy");
		    printf("\n\nCandidato 2 - Charlotte");
		    printf("\n\nCandidato 3 - Sophia");
		    printf("\n\nCandidato 4 - Siren");
		    printf("\n\nOpção 5 - Voto Nulo");
		    printf("\n\nOpção 6 - Voto Branco");
		    printf("\n\n----------------- OUTRAS OPCOES ------------------------------");
		    printf("\n\nOpção 7 - Digite 00 para encerrar a votação e ver a apuração.\n");
		    printf("Opção 8 - Digite 11 para somente encerrar a votação.\n");
		    
		    printf("\n--------------------------------------------------------------");
    	    printf("\n\nDigite seu voto: ");
		    scanf("%i",&voto);
		    
		    switch(voto){
				/*Apuracao. Aqui tem os possiveis casos(votos) que o usuario pode inserir.*/
		    	case 0:
            printf("\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
		    		printf("\n\n******  Votacao encerrada. Veja abaixo a apuração!  ******");
		    		printf("\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
                    fimLoop=1;
		    		break;
		    	case 1:
		    		c1++;
		    		printf("\n\n\n ****** Toddy - VOTO REGISTRADO ****** \n\n");
		    		break;
		    	case 2:
		    		c2++;
		    		printf("\n\n\n ****** Charlotte - VOTO REGISTRADO ****** \n\n");
		    		break;
		    	case 3:
		    		c3++;
		    		printf("\n\n\n ****** Sophia - VOTO REGISTRADO ****** \n\n");
		    		break;
		    	case 4:
		    		c4++;
		    		printf("\n\n\n ****** Siren - VOTO REGISTRADO ****** \n\n");
		    		break;
		    	case 5:
		    		nulo++;
		    		printf("\n\n\n ****** Voto Nulo - VOTO REGISTRADO ****** \n\n\n");
		    		break;
		    	case 6:
		    		branco++;
		    		printf("\n\n\n ****** Voto branco - VOTO REGISTRADO ****** \n\n\n");
		    		break;
		    	case 11:
		    		printf("\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
		    		printf("\nVotação encerrada.\n");
		    		printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
                    return 0;
                    break;
                default:
		    		invalido++;
		    		printf("\n\n\n ****** VOTO INVÁLIDO ****** \n\n\n");
		    		break;		
		    }
        
        if(fimLoop == 1) break;
        
       }   
   }
			/*Contabilizando o total de votos e exibindo ao usuario.*/
				total = c1 + c2 + c3 + c4 + branco + nulo;
				pc1 = (c1) * 100 / total;
				pc2 = (c2) * 100 / total;
				pc3 = (c3) * 100 / total;
				pc4 = (c4) * 100 / total;
				pnulo = (nulo) * 100 / total;
				pbranco = (branco) * 100 / total;
		
			/*Aqui sera mostrado ao usuario caso nao seja inserido nenhum voto.*/
			if(total == 0){
    			printf("\nNão houve votos.\n");
          		printf("\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
			} else{	
				/*Resultado dos votos.*/
				printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
				printf("\nRESULTADOS:\n\n Toddy\t\t\t %i\n Charlotte\t\t %i\n Sophia\t\t\t %i\n Siren\t\t\t %i\n Votos Nulos\t %i\n Votos Brancos\t %i\n", c1, c2, c3, c4, nulo, branco);
				printf("\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
			
				/*Porcentagens dos votos.*/
				printf("\n\nA porcentagem dos votos foram: \n");
				printf("\n Toddy: \t%0.2f%%", pc1);
				printf("\n Charlotte: \t%0.2f%%", pc2);
				printf("\n Sophia: \t%0.2f%%", pc3);
				printf("\n Siren: \t%0.2f%%", pc4);
				printf("\n Votos Nulos: \t%0.2f%%", pnulo);
				printf("\n Votos Branco: \t%0.2f%%\n", pbranco);
			}	
			
		return 0; 
}
