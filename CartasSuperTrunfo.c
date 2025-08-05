#include <stdio.h>

int main (){
    int Populacao, Populacao2, Turistico, Turistico2;
    float Area, Area2, PIB, PIB2;
    char Estado[20], Estado2[20], Codigo[20], Codigo2[20], Cidade[20], Cidade2[20];

    /* Carta Super Trunfo, coletar os dados de uma determinada cidade, como Estado, Codigo, cidade, Numero populacional, Area da cidade, 
    Pontos turistico dessa cidade e o PIB, serão duas cartas no mesmo formato sem comparativos entre elas, somente coletar dados e apresentar ao usuario.
    Os dados serão apresentados em sequencia, assim como a apresentação das cartas.*/


    printf(" Carta 1 \n");
    
    printf("Digite o Estado: "); 
    scanf("%s", &Estado);
    
    printf("Digite o codigo da Carta: "); 
    scanf("%s", &Codigo);
    
    printf("Nome da Cidade: "); 
    scanf("%s", &Cidade);
    
    printf("Populacao: "); 
    scanf(" %d", &Populacao);

    printf("Area: "); 
    scanf(" %f", &Area);

    printf("Pontos Turisticos: "); 
    scanf(" %d", &Turistico);

    printf("PIB: ");
    scanf(" %f", &PIB);


    printf(" Carta 2 \n");

    printf("Digite o Estado: ");
    scanf("%s", &Estado2);
    
    printf("Digite o codigo da Carta: ");
    scanf("%s", &Codigo2);
    
    printf("Nome da Cidade: ");
    scanf("%s", &Cidade2);
    
    printf("Populacao: ");
    scanf(" %d", &Populacao2);

    printf("Area: ");
    scanf(" %f", &Area2);

    printf("Pontos Turisticos: ");
    scanf(" %d", &Turistico2);

    printf("PIB: ");
    scanf(" %f", &PIB2);

    printf("Carta 1 \n");

    printf("\n");
    
    printf("Carta 1: \n");
    printf("Estado: %s \n", Estado);
    printf("Codigo: %s \n", Codigo);
    printf("Nome da Cidade: %s \n", Cidade);
    printf("Populacao: %d \n", Populacao);
    printf("Area: %.3f km² \n", Area);
    printf("PIB: %.2f Bilhoes de reais \n", PIB);
    printf("Numeros de pontos Turisticos: %d \n", Turistico);

    printf("\n");
    
    printf("Carta 2: \n");
    printf("Estado: %s \n", Estado2);
    printf("Codigo: %s \n", Codigo2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("Populacao: %d \n", Populacao2);
    printf("Area: %.3f km² \n", Area2);
    printf("PIB: %.2f Bilhoes de reais \n", PIB2);
    printf("Numeros de pontos Turisticos: %d \n", Turistico2);

    
   
    return 0;




}
