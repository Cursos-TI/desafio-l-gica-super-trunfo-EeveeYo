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


   printf("Escolha uma opção para comparação \n");
   printf("1, População\n");
   printf("2, Area\n");
   printf("3, PIB\n");
   printf("4, Densidade Populacional\n");
   printf("5, PIBpercapita\n");
   scanf("%d", &escolha);

  switch (escolha)
{
    case 1:
        printf("População - Cidade1: %d | Cidade2: %d\n", Populacao, Populacao2);
        printf("Comparação de cartas (Atributo População)\n");
        if (Populacao > Populacao2) {
            printf("Resultado: Cidade1 venceu!\n");
        } else if (Populacao < Populacao2) {
            printf("Resultado: Cidade2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 2:
        printf("Área - Cidade1: %.2f km² | Cidade2: %.2f km²\n", AreaKm, AreaKm2);
        printf("Comparação de cartas (Atributo Área)\n");
        if (AreaKm > AreaKm2) {
            printf("Resultado: Cidade1 venceu!\n");
        } else if (AreaKm < AreaKm2) {
            printf("Resultado: Cidade2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 3:
        printf("PIB - Cidade1: %.2f bilhões | Cidade2: %.2f bilhões\n", PIB, PIB2);
        printf("Comparação de cartas (Atributo PIB)\n");
        if (PIB > PIB2) {
            printf("Resultado: Cidade1 venceu!\n");
        } else if (PIB < PIB2) {
            printf("Resultado: Cidade2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 4:
        printf("Densidade Populacional - Cidade1: %.2f hab/km² | Cidade2: %.2f hab/km²\n", DensidadePopulacional, DensidadePopulacional2);
        printf("Comparação de cartas (Densidade Populacional)\n");
        if (DensidadePopulacional < DensidadePopulacional2) {
            printf("Resultado: Cidade1 venceu!\n");
        } else if (DensidadePopulacional > DensidadePopulacional2) {
            printf("Resultado: Cidade2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 5:
        printf("PIB per capita - Cidade1: %.2f reais | Cidade2: %.2f reais\n", PIBperCapita, PIBperCapita2);
        printf("Comparação de cartas (PIB per capita)\n");
        if (PIBperCapita > PIBperCapita2) {
            printf("Resultado: Cidade1 venceu!\n");
        } else if (PIBperCapita < PIBperCapita2) {
            printf("Resultado: Cidade2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    default:
        printf("Opção inválida\n");
        break;
}

   return 0;


}