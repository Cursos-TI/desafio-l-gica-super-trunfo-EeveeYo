#include <stdio.h>


   int main(){
   
   //Váriaveis carta 01

   char Estado[3];
   char Codigo[3];
   char Cidade[50];
   int Populacao;
   float AreaKm;
   float PIB;
   int PontosTuristicos;
   float DensidadePopulacional;
   float PIBperCapita;
   int escolha;
  


   
   //Váriaveis carta 02

   char Estado2[3];
   char Codigo2[3];
   char Cidade2[50];
   int Populacao2;
   float AreaKm2;
   float PIB2;
   int PontosTuristicos2;
   float DensidadePopulacional2;
   float PIBperCapita2;
   int escolha2;
  
   


   //Entrada de dados

   //Carta01 Estado A

   printf("\n*** Carta 01 ***\n");
   printf ("Digite a sigla do estado: \n");
   scanf("%2s",Estado);

   printf("Digite o código da carta: \n");
   scanf("%s", Codigo);

   printf("Digite o nome da cidade: \n");
   scanf("%s",Cidade);

   printf("Digite a população: \n");
   scanf("%d", &Populacao);

   printf("Digite a área em Km²: \n");
   scanf("%f", &AreaKm);

   printf("Digite o PIB (bilhões de reais): \n");
   scanf("%f", &PIB);

   printf ("Digite os pontos turísticos: \n");
   scanf("%d", &PontosTuristicos);


   //calculando densidade e PIB percapita da carta 01

   DensidadePopulacional = (float)Populacao / AreaKm;
   PIBperCapita = (PIB * 1000000000) / Populacao;


   printf("Estado: %s\n",Estado);
   printf("Codigo: %s\n",Codigo);
   printf("Cidade: %s\n",Cidade);
   printf("Populacao: %d\n",Populacao);
   printf("Area em km²: %.2f\n", AreaKm);
   printf("PIB:%.2f bilhões de reais\n",PIB);
   printf("Pontos Turisticos: %d\n",PontosTuristicos);
   printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePopulacional);
   printf("PIBPerCapita : %.2f reais\n", PIBperCapita);
    

   //Carta02 Estado B

   printf("\n*** Carta 02 ***\n");
   printf("Digite a sigla do estado2: \n");
   scanf("%2s",Estado2);

   printf("Digite o código da carta2: \n");
   scanf("%s",Codigo2);

   printf ("Digite o nome da cidade2: \n");
   scanf("%s",Cidade2);

   printf("Digite a população2: \n");
   scanf("%d",&Populacao2);

   printf("Digite a área em Km²2: \n");
   scanf("%f",&AreaKm2);

   printf("Digite o PIB2 (bilhões de reais): \n");
   scanf("%f",&PIB2);

   printf("Digite os pontos turisticos2: \n");
   scanf("%d",&PontosTuristicos2);

    //calculando densidade e PIB percapita da carta 02

    DensidadePopulacional2 = (float)Populacao2 / AreaKm2;
    PIBperCapita2 = (PIB2 * 1000000000) / Populacao2;




   printf("Estado2: %s\n",Estado2);
   printf("Codigo2: %s\n",Codigo2);
   printf("Cidade2: %s\n",Cidade2);
   printf("Populacao2: %d\n",Populacao2);
   printf("Area em Km2: %.2f\n",AreaKm2);
   printf("PIB2: %.2f bilhões de reais\n",PIB2);
   printf("Pontos Turisticos2: %d\n",PontosTuristicos2);
   printf("Densidade Populacional2: %.2f hab/km²\n", DensidadePopulacional2);
   printf("PIBPerCapita : %.2f reais\n", PIBperCapita);

   
   //Comparação das cartas 
       float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB per capita\n");
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > 5) {
        printf("Escolha inválida.\n");
        return 1;
    }

    // Menu para segunda escolha, sem repetir a primeira
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == escolha) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Densidade Populacional\n"); break;
            case 5: printf("5 - PIB per capita\n"); break;
        }
    }
    scanf("%d", &escolha2);

    if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha) {
        printf("Escolha inválida.\n");
        return 1;
    }

    // Atribuir valores para o atributo 1
    switch (escolha) {
        case 1: valor1_c1 = Populacao; valor1_c2 = Populacao2; break;
        case 2: valor1_c1 = AreaKm; valor1_c2 = AreaKm2; break;
        case 3: valor1_c1 = PIB; valor1_c2 = PIB2; break;
        case 4: valor1_c1 = DensidadePopulacional; valor1_c2 = DensidadePopulacional2; break;
        case 5: valor1_c1 = PIBperCapita; valor1_c2 = PIBperCapita2; break;
    }

    // Atribuir valores para o atributo 2
    switch (escolha2) {
        case 1: valor2_c1 = Populacao; valor2_c2 = Populacao2; break;
        case 2: valor2_c1 = AreaKm; valor2_c2 = AreaKm2; break;
        case 3: valor2_c1 = PIB; valor2_c2 = PIB2; break;
        case 4: valor2_c1 = DensidadePopulacional; valor2_c2 = DensidadePopulacional2; break;
        case 5: valor2_c1 = PIBperCapita; valor2_c2 = PIBperCapita2; break;
    }

    // Comparação do primeiro atributo
    printf("\n--- Comparação do Primeiro Atributo ---\n");
    if (escolha == 4) {
        if (valor1_c1 < valor1_c2)
            printf("Cidade1 venceu (menor densidade)\n");
        else if (valor1_c1 > valor1_c2)
            printf("Cidade2 venceu (menor densidade)\n");
        else
            printf("Empate\n");
    } else {
        if (valor1_c1 > valor1_c2)
            printf("Cidade1 venceu\n");
        else if (valor1_c1 < valor1_c2)
            printf("Cidade2 venceu\n");
        else
            printf("Empate\n");
    }

    // Comparação do segundo atributo
    printf("\n--- Comparação do Segundo Atributo ---\n");
    if (escolha2 == 4) {
        if (valor2_c1 < valor2_c2)
            printf("Cidade1 venceu (menor densidade)\n");
        else if (valor2_c1 > valor2_c2)
            printf("Cidade2 venceu (menor densidade)\n");
        else
            printf("Empate\n");
    } else {
        if (valor2_c1 > valor2_c2)
            printf("Cidade1 venceu\n");
        else if (valor2_c1 < valor2_c2)
            printf("Cidade2 venceu\n");
        else
            printf("Empate\n");
    }

    // Soma final
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n--- Resultado Final ---\n");
    printf("Soma Cidade1: %.2f | Soma Cidade2: %.2f\n", soma1, soma2);

    if (soma1 > soma2)
        printf(" Cidade1 venceu a rodada!\n");
    else if (soma1 < soma2)
        printf("Cidade2 venceu a rodada!\n");
    else
        printf(" Empate na rodada!\n");




      
   return 0;
   

   }