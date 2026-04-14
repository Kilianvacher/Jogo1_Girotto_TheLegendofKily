#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>



int main(){ //Menu Principal do The Legends of Kily
	setlocale(LC_ALL,"portuguese");	//Não ter problema em colocar "ç" ou "~/^"
	
	srand(time(NULL)); //Randomizer ligado no main, para utilizar nas funções necessárias
	
		int op;
	
	printf("----------------------\n");
	printf("| The Legend of Kily |\n");
	printf("----------------------\n\n");
	printf("1) Karruti\n");
	printf("2) Jogo do Pão\n");
	printf("3) Gousmas War\n");
	printf("4) Sair :(\n\n");
	printf("Opção: ");
	
	scanf("%d", &op);
	
	system("cls");
	
	switch(op){
		case 1:
			mK();
			break;
		case 2:
			mJP();
			break;
		case 3:
			mGW();
			break;
		case 4:
			getchar();
	}


	
	return 0;
}


void mK(){ //Menu principal do Karruti
	int opK;
	printf("-----------\n");
	printf("| Karruti |\n");
	printf("-----------\n\n");
	printf("1) Jogar\n");
	printf("2) Descrição\n");
	printf("3) Voltar para o menu\n\n");
	printf("Opção: ");
	scanf("%d", &opK);
		system("cls");
	switch(opK){
		case 1:
			jg_mK();
			break;
		case 2:
		system("cls");
		printf("-------------\n");
		printf("| Descrição |\n");
		printf("-------------\n\n");
		printf("O Karruti é um minijogo de perguntas e respostas onde o jogador testa seus conhecimentos");
		printf(" em uma sequência de desafios objetivos. ");
		printf("O jogo possui um total de cinco perguntas, apresentadas na mesma ordem sempre. Cada pergunta ");
		printf("possui somente uma alternativa correta.\n");
		printf("No final, será apresentado a quantidade de alternativas que o jogador acertou e se ele quer ");
		printf("jogar novamente ou voltar para o menu principal.\n");
		printf("Aperte enter para voltar para o minijogo...");
		
		getchar();
		getchar();
		system("cls");
		
		mK();
			break;
		case 3:
			main();
			break;
	}
	
}

void jg_mK(){ //Jogo do Karruti
	//ASCII ART FEITA USANDO IA.
	printf("\n");
printf("¦¦+  ¦¦+ ¦¦¦¦¦+ ¦¦¦¦¦¦+ ¦¦¦¦¦¦+ ¦¦+   ¦¦+¦¦¦¦¦¦¦¦+¦¦+\n");
printf("¦¦¦ ¦¦++¦¦+--¦¦+¦¦+--¦¦+¦¦+--¦¦+¦¦¦   ¦¦¦+--¦¦+--+¦¦¦\n");
printf("¦¦¦¦¦++ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦++¦¦¦¦¦¦++¦¦¦   ¦¦¦   ¦¦¦   ¦¦¦\n");
printf("¦¦+-¦¦+ ¦¦+--¦¦¦¦¦+--¦¦+¦¦+--¦¦+¦¦¦   ¦¦¦   ¦¦¦   ¦¦¦\n");
printf("¦¦¦  ¦¦+¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦+¦¦¦¦¦¦++   ¦¦¦   ¦¦¦\n");
printf("+-+  +-++-+  +-++-+  +-++-+  +-+ +-----+    +-+   +-+\n");
	system("pause");
	
	printf("aperte enter para iniciar o jogo...");
	getchar();
	system("cls");

char r1, r2, r3, r4, r5, x; //Resposta de cada pergunta + Resposta do usuario caso ele acerte ou erre o Secret

int certa = 0, errada = 0, secret = 0, rSecret; //Soma para ver quantas acertou ou errou + o final secreto.
//Parte 1
	printf("1) O que acontece no episódio 67 da série Skibidi Toilet?\n\n");
	printf("a) O Homem da TV Titan aparece pela primeira vez\n");
	printf("b) Invadem a base dos homens TV's e destroem tudo\n");
	printf("c) Todos começam a programar o jogo do Girotto\n");
	printf("d) Acaba a série\n");
	printf("Opção: ");
	scanf("%c", &r1);
	switch(r1){
		case 'a':
        case 'A':
			printf("A resposta está correta! Meus parabéns.");
			certa += 1;
			break;
	    case 'c':
        case 'C':
        	printf(" resposta está errada! A resposta correta era a Alternativa A. (Você precisa de mais cultura)");
        	errada += 1;
        	secret += 1;
        	break;
		default:
			printf("A resposta está errada! A resposta correta era a Alternativa A. (Você precisa de mais cultura)");
			errada += 1;
			break;
	}
	printf("\n\nAperte enter para continuar...");
	
	getchar();
	getchar();
	system("cls");
	
	printf("Carregando a próxima pergunta...");
		Sleep(2000);
	system("cls");
	//Parte 2
		printf("2) Quem é a criadora de Digital Circus?\n\n");
	printf("a) TazerCraft\n");
	printf("b) Girotto\n");
	printf("c) Glitch\n");
	printf("d) Gooseworx\n");
	printf("Opção: ");
	
	scanf("%c", &r2);
	switch(r2){
		case 'd':
        case 'D':
			printf("A resposta está correta! Meus parabéns.");
			certa += 1;
			break;
		case 'b':
        case 'B':
        	printf(" resposta está errada! A resposta correta era a Alternativa D.");
        	errada += 1;
        	secret += 1;
        	break;
		default:
			printf("A resposta está errada! A resposta correta era a Alternativa D.");
			errada += 1;
			break;
	}
	printf("\n\nAperte enter para continuar...");
	
	getchar();
	getchar();
	system("cls");
	
	printf("Carregando a próxima pergunta...");
		Sleep(2000);
	system("cls");
	//Parte 3
	printf("3) Qual o nome do criador do The Legend of Kily?\n\n");
	printf("a) Kilian Soares Vacher\n");
	printf("b) Malco Arqueiro da Costa\n");
	printf("c) Salim Guerreiro da Silva\n");
	printf("d) Girotto\n");
	printf("Opção: ");
	scanf("%c", &r3);
	switch(r3){
		case 'a':
        case 'A':
			printf("A resposta está correta! Meus parabéns.");
			certa += 1;
			break;
	    case 'd':
        case 'D':
        	printf(" resposta está errada! A resposta correta era a Alternativa A.");
        	errada += 1;
        	secret += 1;
        	break;
		default:
			printf("A resposta está errada! A resposta correta era a Alternativa A.");
			errada += 1;
			break;
	}
	printf("\n\nAperte enter para continuar...");
	getchar();
	getchar();
	system("cls");
	printf("Carregando a próxima pergunta...");
		Sleep(2000);
	system("cls");
	
		//Parte 4
	printf("4) Qual é a conta na Steam com o nível mais alto atualmente(2026)?\n\n");
	printf("a) Laof\n");
	printf("b) Stasik\n");
	printf("c) GirottoZelda\n");
	printf("d) 6Xaolim7\n");
	printf("Opção: ");
	scanf("%c", &r4);
	switch(r4){
		case 'b':
        case 'B':
			printf("A resposta está correta! Meus parabéns.");
			certa += 1;
			break;
	    case 'c':
        case 'C':
        	printf(" resposta está errada! A resposta correta era a Alternativa B.");
        	errada += 1;
        	secret += 1;
        	break;
		default:
			printf("A resposta está errada! A resposta correta era a Alternativa B.");
			errada += 1;
			break;
	}
	printf("\n\nAperte enter para continuar...");
	getchar();
	getchar();
	system("cls");
	printf("Carregando a próxima pergunta...");
		Sleep(2000);
	system("cls");
		//Parte 5
	printf("5) Qual a fase mais difícil do Geomtry Dash atualmente?(Verificada)\n\n");
	printf("a) Tidal Wave\n");
	printf("b) Girotto processing\n");
	printf("c) ORBIT\n");
	printf("d) Thinking Space II\n");
	printf("Opção: ");
	scanf("%c", &r5);
	switch(r5){
		case 'd':
        case 'D':
			printf("A resposta está correta! Meus parabéns.");
			certa += 1;
			break;
	    case 'b':
        case 'B':
        	printf(" resposta está errada! A resposta correta era a Alternativa D.");
        	errada += 1;
        	secret += 1;
        	break;
		default:
			printf("A resposta está errada! A resposta correta era a Alternativa D.");
			errada += 1;
			break;
	}
	printf("\n\nAperte enter para continuar...");
	getchar();
	getchar();
	system("cls");
	printf("Carregando seu resultado...");
		Sleep(2000);
	system("cls");
	if(secret==5){
	printf("--------------\n");
	printf("| Resultado: |\n");
	printf("--------------\n\n");
	printf("Questões acertadas: %d\n", certa);
	printf("Questões erradas: %d\n", errada);
	printf("Você encontrou o final secreto, caso queira continuar, coloque o código aqui(Dica: Kilian Soares Vacher): ");
	scanf("%d", &rSecret);
		switch(rSecret){
			case 666:
				printf("Você realmente quer continuar?(Y/N)\n");
				scanf(" %c", &x);
					if(x=='Y'|| x=='y'){
						system("clr");
						mSecret();
					} else if(x=='N'|| x=='n'){
						system("clr");
						main();
					}
					break;
				default:
					printf("Você errou, tente novamente em outro momento.");
					system("clr");
					main();
					break;
		}
	} else {
	printf("--------------\n");
	printf("| Resultado: |\n");
	printf("--------------\n\n");
	printf("Questões acertadas: %d\n", certa);
	printf("Questões erradas: %d", errada);
	}

}

void mSecret(){ //Easter Egg Principal
	printf("Quem diria que a atividade enviada há 2 meses não daria para ser feita direito em 2 dias.");
	
}

void mJP(){
	int opJP;
	printf("---------------\n");
	printf("| Jogo do Pão |\n");
	printf("---------------\n\n");
	printf("1) Jogar\n");
	printf("2) Descrição\n");
	printf("3) Voltar para o menu\n\n");
	printf("Opção: ");
	scanf("%d", &opJP);
		system("cls");
		switch(opJP){
		case 1:
			jg_mJP();
			break;
		case 2:
		system("cls");
		printf("-------------\n");
		printf("| Descrição |\n");
		printf("-------------\n\n");
		printf("O Jogo do Pão se passa em um cenário misterioso onde dois jogadores estão diante de cinco caixas fechadas.");
		printf(" Entre elas, uma esconde o botão que garante a vitória, enquanto outra guarda um pão mítico irresistível, ");
		printf("porém envenenado, levando à derrota imediata. ");
		printf("A cada nova partida, tudo muda de lugar, tornando cada escolha uma decisão arriscada.");
		printf("Os jogadores se alternam abrindo caixas ainda fechadas, tentando a sorte e usando estratégia para evitar o perigo. ");
		printf("O jogo termina assim que alguém encontra o botão ou cai na armadilha do pão envenenado, ");
		printf("deixando sempre a tensão no ar e a vontade de jogar novamente.\n");
		printf("Aperte enter para voltar para o minijogo...");
		getchar();
		getchar();
		system("cls");
		mJP();
			break;
		case 3:
			main();
			break;
	}
}

void jg_mJP(){
	int botao, cobra, escolha, turno, p1, p2, i, fJogo;
    int caixasAbertas[6] = {0, 0, 0, 0, 0, 0}; 
    char jogar, replay;
    char nomes[7][30] = {"Milas", "Ottorig", "Nailik", "Oclam", "Iput", "Ogirdor", "Ana"}; //Personagens disponíveis, usando Array para listar.
    do {
		system("cls");

	
		printf("Escolha o nome do Jogador 1:\n"); 
		for(i = 0; i < 7; i++){ //O usuaria escolhe o nome do primeiro jogador
			printf("%d) %s\n", i + 1, nomes[i]);
		}
		printf("Opcao: ");
		scanf("%d", &p1);

		while(p1 < 1 || p1 > 7){ //A pessoa só pode escolher entre o numero 1 até 7
			printf("Opcao invalida. Escolha de 1 a 7: ");
			scanf("%d", &p1);
		}

		system("cls");

		printf("Escolha o nome do Jogador 2:\n");
		for(i = 0; i < 7; i++){
			if(i + 1 != p1){
				printf("%d) %s\n", i + 1, nomes[i]);
			}
		}
		printf("Opcao: ");
		scanf("%d", &p2);

		while(p2 < 1 || p2 > 7 || p2 == p1){ 
			printf("Opcao invalida. Escolha outro nome: ");
			scanf("%d", &p2);
		}

		
		for(i = 0; i < 6; i++){
			caixasAbertas[i] = 0;
		}

	
		turno = rand() % 2; // Sorteia quem começa no inicio, sendo que se for resultado 0 = Jogador 1 e se for resultado 1 = Jogador 2

	
		botao = rand() % 5 + 1; 	// Sorteia botão e cobra em caixas diferentes
		do{
			cobra = rand() % 5 + 1;
		} while(cobra == botao);

		while(1){
			system("cls");

			printf("=========== JOGO DO PAO ===========\n");
			printf("Jogador 1: %s\n", nomes[p1 - 1]);
			printf("Jogador 2: %s\n", nomes[p2 - 1]);
			printf("===================================\n\n");

			if(turno == 0){
				printf("Turno de: %s\n", nomes[p1 - 1]);
			} else {
				printf("Turno de: %s\n", nomes[p2 - 1]);
			}

			printf("Escolha uma caixa (1-5): ");
			scanf("%d", &escolha);

			
			if(escolha < 1 || escolha > 5){ //caso o usuario selecione a mesma caixa para dois personagens
				printf("Numero invalido!\n");
				Sleep(1000);
				continue;
			}

			if(caixasAbertas[escolha] == 1){
				printf("Essa caixa ja foi aberta!\n");
				Sleep(1000);
				continue;
			}

			caixasAbertas[escolha] = 1;

			if(escolha == botao){
				system("cls");
				printf("===================================\n");
				printf("O BOTAO foi encontrado!\n");

				if(turno == 0){
					printf("%s venceu!\n", nomes[p1 - 1]);
				} else {
					printf("%s venceu!\n", nomes[p2 - 1]);
				}

				printf("===================================\n");
				break;
			}
			else if(escolha == cobra){
				system("cls");
				printf("===================================\n");
				printf("A COBRA apareceu!\n");

				if(turno == 0){
					printf("%s perdeu!\n", nomes[p1 - 1]);
				} else {
					printf("%s perdeu!\n", nomes[p2 - 1]);
				}

				printf("===================================\n");
				break;
			}

			else{
				printf("Caixa vazia...\n");
				Sleep(1000);

				if(turno == 0){
					turno = 1;
				} else {
					turno = 0;
				}
			}
		}

		printf("\nJogar novamente? (s/n): ");
		scanf(" %c", &replay);

	} while(replay == 's' || replay == 'S');

	system("cls");
}

void mGW(){
	int opGW;
	printf("---------------\n");
	printf("| Gousmas War |\n");
	printf("---------------\n\n");
	printf("1) Jogar\n");
	printf("2) Descrição\n");
	printf("3) Voltar para o menu\n\n");
	printf("Opção: ");
	scanf("%d", &opGW);
		system("cls");
	switch(opGW){
		case 1:
			jg_mGW();
			break;
		case 2:
		system("cls");
		printf("-------------\n");
		printf("| Descrição |\n");
		printf("-------------\n\n");
		printf("O Gousmas War é um jogo de estratégia onde dois jogadores controlam criaturas chamadas Gousmas, cada uma com um nível de fúria que define seu estado no jogo.");
		printf(" O objetivo é eliminar as Gousmas do adversário fazendo com que sua fúria ultrapasse o limite seguro, ");
		printf("enquanto administra cuidadosamente a própria para não perder as suas.");
		printf("A cada turno, o jogador pode escolher entre atacar o inimigo, aumentando sua fúria, ou dividir a fúria entre suas próprias Gousmas, podendo até reviver uma delas.");
		printf(" As decisões exigem estratégia e controle, já que qualquer excesso pode levar à destruição. ");
		printf("A partida termina quando um dos jogadores perde todas as suas Gousmas, deixando apenas um vencedor.\n");
		printf("Aperte enter para voltar para o minijogo...");
		getchar();
		getchar();
		system("cls");
		mK();
			break;
		case 3:
			main();
			break;
	}
	
}
//A parte do Gousmas foi utilizado IA, pois não consegui entender como fazer essa parte.
void jg_mGW(){

    int p1[2] = {1,1}; // Gousmas jogador 1
    int p2[2] = {1,1}; // Gousmas jogador 2

    int turno = rand() % 2;
    int acao, gEscolhido, alvo, valor;
    char replay;

    do {

        // reset
        p1[0] = p1[1] = 1;
        p2[0] = p2[1] = 1;
        turno = rand() % 2;

        while(1){
            system("cls");

            printf("===== GOUSMAS WAR =====\n\n");

            printf("Jogador 1: [%d] [%d]\n", p1[0], p1[1]);
            printf("Jogador 2: [%d] [%d]\n\n", p2[0], p2[1]);

            printf("Turno do Jogador %d\n\n", turno + 1);

            printf("1) Atacar\n");
            printf("2) Dividir\n");
            printf("Opcao: ");
            scanf("%d", &acao);

            // ================= ATAQUE =================
            if(acao == 1){

                printf("Escolha sua Gousma (1 ou 2): ");
                scanf("%d", &gEscolhido);
                gEscolhido--;

                printf("Escolha alvo (1 ou 2): ");
                scanf("%d", &alvo);
                alvo--;

                if(turno == 0){
                    if(p1[gEscolhido] == 0 || p2[alvo] == 0){
                        printf("Escolha invalida!\n");
                        Sleep(1000);
                        continue;
                    }

                    p2[alvo] += p1[gEscolhido];

                    if(p2[alvo] > 5) p2[alvo] = 0;
                }
                else{
                    if(p2[gEscolhido] == 0 || p1[alvo] == 0){
                        printf("Escolha invalida!\n");
                        Sleep(1000);
                        continue;
                    }

                    p1[alvo] += p2[gEscolhido];

                    if(p1[alvo] > 5) p1[alvo] = 0;
                }
            }

            // ================= DIVIDIR =================
            else if(acao == 2){

                printf("Escolha sua Gousma origem (1 ou 2): ");
                scanf("%d", &gEscolhido);
                gEscolhido--;

                int destino = (gEscolhido == 0) ? 1 : 0;

                printf("Quanto transferir: ");
                scanf("%d", &valor);

                if(turno == 0){
                    if(p1[gEscolhido] <= valor || valor <= 0){
                        printf("Movimento invalido!\n");
                        Sleep(1000);
                        continue;
                    }

					
					
                    p1[gEscolhido] -= valor;
                    p1[destino] += valor;

                    if(p1[destino] > 5) p1[destino] = 0;
                }
                else{
                    if(p2[gEscolhido] <= valor || valor <= 0){
                        printf("Movimento invalido!\n");
                        Sleep(1000);
                        continue;
                    }

					
                    p2[gEscolhido] -= valor;
                    p2[destino] += valor;

					
                    if(p2[destino] > 5) p2[destino] = 0;
                    
                }
            
		}
            

            else{
                printf("Opcao invalida!\n");
                
                Sleep(1000);
                continue;
            }

            // ================= FIM DE JOGO =================
            if(p1[0] == 0 && p1[1] == 0){
            	
                printf("\nJogador 2 venceu!\n");
                break;
            }

            if(p2[0] == 0 && p2[1] == 0){
            	
                printf("\nJogador 1 venceu!\n");
                break;
            }

            // troca turno
            turno = (turno == 0) ? 1 : 0;
        }

        printf("\nJogar novamente? (s/n): ");
        
        scanf(" %c", &replay);

    } while(replay == 's' || replay == 'S');
}
