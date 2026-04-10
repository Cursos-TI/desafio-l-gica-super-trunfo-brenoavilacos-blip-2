#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades.
  // As varávies receberão os dados informados pelo usuários.

  char estado1, codigo1[4], cidade1[30];
  unsigned long int populacao1;
  float area1, pib1, super_poder1, densidade1, pibpercapta1, inverso_densidade1;
  int pontos1;
  
  char estado2, codigo2[4], cidade2[30];
  unsigned long int populacao2;
  float area2, pib2, super_poder2, densidade2, pibpercapta2, inverso_densidade2;
  int pontos2;

  float resultado_populacao, resultado_area, populacao_pip, resultado_dendidade, resultado_pippercapta, resultado_inversodensidade, resultado_pontos;
  

  
  // Área para entrada de dados.
  // Nesta área constarão os códigos para inprimir as mensagens de solicitação de entrada de dados.
  // Estarão também nesta área os códigos tipo scanf para armazenar os dados informados pelo usuário.
  
  


  //Entrada de dados da Carta 1.
  printf("Digite o Estado em que a primeira cidade está localizada(Utilize uma letra de A a H para dar nome ao estado, use letra mauscula):\n");
  scanf(" %c", &estado1 );

  printf("Digite o código identificador da primeira cidade(Exemplo: A01, B02, C03):\n");
  scanf(" %4s", codigo1);

  printf("Digite o nome da primeira cidade:\n");
  scanf(" %30s", cidade1);

  printf("Digite a população da primeira cidade:\n");
  scanf(" %lu", &populacao1);

  printf("Digite a área, em quilômetros quadrados, da primeira cidade:\n");
  scanf("%f", &area1);

  printf("Digite o PIB da  primeira cidade:\n");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turísticos da primeira cidade:\n");
  scanf("%d", &pontos1);

  

  //Entrada de dados da carta 2.
  printf("Digite o Estado em que a segunda cidade está localizada(Utilize uma letra de A a H para dar nome ao estado, use letra mauscula):\n");
  scanf(" %c", &estado2 );

  printf("Digite o código identificador da segunda cidade(Exemplo: A01, B02, C03):\n");
  scanf(" %4s", codigo2);

  printf("Digite o nome da segunda cidade:\n");
  scanf(" %30s", cidade2);

  printf("Digite a população da segunda cidade:\n");
  scanf(" %lu", &populacao2);

  printf("Digite a área, em quilômetros quadrados, da segunda cidade:\n");
  scanf("%f", &area2);

  printf("Digite o PIB da segunda cidade:\n");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turísticos da segunda cidade:\n");
  scanf("%d", &pontos2);


  // Nesta áre serão exibidos na tela do terminal os valores informados pelo usuário ao cadastras as duas cartas.
  // Área para o calculo da densidade populacional e PIB per capta.
  // Área para o calculo da variavél Super Poder.
  
  
  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;
  pibpercapta1 = pib1 / populacao1;
  pibpercapta2 = pib2 / populacao2;
  
  inverso_densidade1 = 1.0 / densidade1;
  inverso_densidade2 = 1.0 / densidade2;
  
  super_poder1 = (float) populacao1 + (float)area1 + (float)pib1 + (float)pontos1 +  (float)pibpercapta1 + (float)densidade1, (float)inverso_densidade1;
  super_poder2 = (float) populacao2 + (float)area2 + (float)pib2 + (float)pontos2 +  (float)pibpercapta2 + (float)densidade2 + (float)inverso_densidade2;

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    if (populacao1 > populacao2){
        printf("Populacação: A carta 1 venceu.\n");
    }else{
        printf("Populacação: A carta 2 venceu.\n");  
    }

    if (area1 > area2){
        printf("Área: A carta 1 venceu.\n");  
    }else{
        printf("Área: A carta 2 venceu.\n");
    }

    if (pib1 > pib2){
        printf("PIB: A carta 1 venceu.\n");
    }else{
        printf("PIB: A carta 2 venceu.\n");
    }

    if (pontos1 > pontos2){
        printf("Pontos Turísticos: A carta 1 venceu.\n");
    }else{
        printf("Pontos Turísticos: A carta 2 venceu.\n");
    }

    if (densidade1 < densidade2){
        printf("Densidade populacional: A carta 1 venceu.\n");
    }else{
        printf("Densidade populacional:  A carta 2 venceu.\n");
    }
   
    if (pibpercapta1 > pibpercapta2){
        printf("PIB per capta: A carta 1 venceu.\n");
    }else{
        printf("PIB per capta: A carta 2 venceu.\n");
    }

    if (super_poder1 > super_poder2){
        printf("Super poder: A carta 1 venceu.\n");
    }else{
        printf("Super poder: A carta 2 venceu.\n");
    } 

return 0;
}
