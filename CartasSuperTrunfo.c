#include <stdio.h>
#include <string.h>


// Variavel Global nome do Jogador
char nomeDoJogador [50];

int main (){

//  Var. Cartas 1  
char incialDoEstado;
char codigoCarta [20];
char nomeDaCidade [50];
int quantidadePopulacao;
float areaEmKm;
float PIB;
int qtdPontosTuristicos;

// Var. Cartas 2
char incialDoEstado2;
char codigoCarta2 [20];
char nomeDaCidade2 [50];
int quantidadePopulacao2;
float areaEmKm2;
float PIB2;
int qtdPontosTuristicos2;

printf("\n === Bem vindos ao Super Trunfo de Cartas ===\n");

printf("Para iniciar o jogo vamos precisar que você envie "
       "algumas informações, preencha os campos "
       "abaixo com atenção.\n");

printf("\nInicialmente preciso que você se identifique: ");
scanf("%s", nomeDoJogador);

printf("\nPerfeito, %s agora digite apenas a inicial do estado (1 letra):", nomeDoJogador);
scanf(" %c", &incialDoEstado);

printf("\nAgora, digite o código da carta que você irá lançar. Ex. A01, A02...: ");
scanf("%s", codigoCarta);
getchar();

printf("\nE qual o nome da cidade dentro do estado que você quer jogar? ");
fgets(nomeDaCidade, 50, stdin);
nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';

printf("\n%s, você sabe o numero aproximado da população da sua cidade? ", nomeDoJogador);
scanf("%d", &quantidadePopulacao);

printf("\nEntendido, existe aproximadamente, %d isto é ótimo, agora me fala a área em Km² "
"precisa só digitar o numero: ");
scanf("%f", &areaEmKm);

printf("\nEstamos indo bem, agora me informa o PIB aproximado da sua cidade: ");
scanf("%f", &PIB);

printf("\nUau, fiquei com surpreso com a ultima informação, provavelmente a cidade deve ter "
"òtimos pontos turisticos, sabe me informar quantos? ");
scanf("%d", &qtdPontosTuristicos);

printf("\n=== Resumo da Carta 1 Lançada por %s ===\n", nomeDoJogador);
printf("Estado: %c\n", incialDoEstado);
printf("Código da Carta: %s\n", codigoCarta);
printf("Nome da Cidade: %s\n", nomeDaCidade);
printf("População: %d\n", quantidadePopulacao);
printf("Área: %.2f Km² \n", areaEmKm);
printf("PIB: %.2f bilhões de reais \n", PIB);
printf("Número de Pontos Turisticos: %d\n", qtdPontosTuristicos);
printf("\n=== %s Aguarde o outro jogador lançar a carte dele ===\n", nomeDoJogador);


}